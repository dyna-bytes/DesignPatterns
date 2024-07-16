#ifndef __QUACK_H
#define __QUACK_H
#include "QuackBehaviorInterface/QuackBehavior.h"

typedef struct Quack {
    QuackBehavior quackBehavior;
} Quack;

void initQuack(Quack *self);

#endif