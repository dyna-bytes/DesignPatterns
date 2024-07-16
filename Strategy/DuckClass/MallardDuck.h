#ifndef __MALLARDDUCK_H
#define __MALLARDDUCK_H
#include "DuckClass/Duck.h"

typedef struct MallardDuck {
    Duck duck; // extend
} MallardDuck;
void initMallardDuck(MallardDuck *self);

#endif