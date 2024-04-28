#ifndef LOG_H
#define LOG_H

#include <stdio.h>
#include <stdlib.h>

#define logf(...) fprintf(stdout, __VA_ARGS__);
#define logf_fatal(...) fprintf(stderr, __VA_ARGS__); exit(-1);

#endif
