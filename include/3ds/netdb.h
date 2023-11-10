#pragma once

#include <netdb.h>

#if defined(__3DS__)

// netdb 3DS doesn't define this struct
struct servent
{
    char *s_name;
    char **s_aliases;
    uint16_t s_port;
    char *s_proto;
};

#endif
