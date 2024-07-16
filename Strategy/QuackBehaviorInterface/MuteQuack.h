#ifndef __MUTEQUACK_H
#define __MUTEQUACK_H
#include "QuackBehaviorInterface/QuackBehavior.h"

typedef struct MuteQuack {
    QuackBehavior quackBehavior;
} MuteQuack;

void initMuteQuack(MuteQuack *self);

#endif