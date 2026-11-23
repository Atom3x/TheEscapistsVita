#include "objects/moveit.h"
#include "mathcommon.h"
#include "movement.h"
#ifdef CHOWDREN_VITA_60FPS
#include "desktop/vitaframetime.h"
#endif

static MoveIt * global_instance;

MoveIt::MoveIt(int x, int y, int type_id)
: FrameObject(x, y, type_id)
{
    global_instance = this;
}

void MoveIt::add_queue(QualifierList & objs)
{
    for (QualifierIterator it(objs); !it.end(); ++it) {
        queue.push_back(*it);
    }
}

void MoveIt::move(int x, int y, int int_speed)
{
    FlatObjectList::iterator it;

    float speed = int_speed / 10.0f;

    for (it = queue.begin(); it != queue.end(); ++it) {
        FrameObject * obj = *it;
        int dst_x = x - obj->layer->off_x;
        int dst_y = y - obj->layer->off_y;
        float distance = get_distance(obj->x, obj->y, dst_x, dst_y);
        int cycles = std::max(1, int(distance / speed));

        if (obj->move_data != NULL)
            delete obj->move_data;
        obj->move_data = new FrameObject::MoveData(obj->x, obj->y, 
                                                   dst_x, dst_y, cycles);
        instances.push_back(obj);
    }
}

void MoveIt::clear_queue()
{
    queue.clear();
}

void MoveIt::update()
{
    // Destruction removes the entry from instances; continue at the same index.
    for (size_t i=0; i<instances.size();) {
        FrameObject *obj = instances[i];
        FrameObject::MoveData *data = obj->move_data;
        if (!data) { instances.erase(instances.begin()+i); continue; }
        if (data->step >= data->cycles) { delete data; continue; }
#ifdef CHOWDREN_VITA_60FPS
        data->step = std::min<double>(data->cycles,data->step+vita_time_scale());
#else
        ++data->step;
#endif
        int x = ((data->dst_x-data->src_x)*data->step)/data->cycles+data->src_x;
        int y = ((data->dst_y-data->src_y)*data->step)/data->cycles+data->src_y;
        obj->set_position(x,y);
        ++i;
    }
}

void MoveIt::stop(QualifierList & objs)
{
    for (QualifierIterator it(objs); !it.end(); ++it) {
        FrameObject * obj = *it;
        if (obj->move_data == NULL)
            continue;
        delete obj->move_data;
        obj->move_data = NULL;
    }
}

FrameObject::MoveData::MoveData(int src_x, int src_y, int dst_x, int dst_y,
                                int cycles)
: src_x(src_x), src_y(src_y), dst_x(dst_x), dst_y(dst_y), cycles(cycles),
  step(0)
{
}

FrameObject::MoveData::~MoveData()
{
    FlatObjectList::iterator it;
    for (it = MoveIt::instances.begin(); it != MoveIt::instances.end(); ++it) {
        FrameObject * obj = *it;
        if (obj->move_data != this)
            continue;
        obj->move_data = NULL;
        MoveIt::instances.erase(it);
        return;
    }
}

FlatObjectList MoveIt::queue;
FlatObjectList MoveIt::instances;
