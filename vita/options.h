#ifndef ESCAPISTS_VITA_OPTIONS_H
#define ESCAPISTS_VITA_OPTIONS_H
// Private testing only. No save files or completion scores are changed.
#ifndef ESCAPISTS_VITA_TEST_UNLOCK_PRISONS
#define ESCAPISTS_VITA_TEST_UNLOCK_PRISONS 0
#endif
constexpr bool allPrisonsIsOpened = ESCAPISTS_VITA_TEST_UNLOCK_PRISONS != 0;
#endif
