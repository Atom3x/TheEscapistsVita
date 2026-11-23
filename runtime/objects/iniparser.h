#ifndef CHOWDREN_INIPARSER_H
#define CHOWDREN_INIPARSER_H
#include <string>

int ini_parse_string(const std::string &text,
                     int (*handler)(void *, const char *, const char *, const char *),
                     void *context);

#endif
