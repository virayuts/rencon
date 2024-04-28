#ifndef LOG_H
#define LOG_H

#include <stdio.h>
#include <stdlib.h>

#define log(...) fprintf(stdout, __VA_ARGS__);
#define log_fatal(...) fprintf(stderr, __VA_ARGS__); exit(-1);

#endif
