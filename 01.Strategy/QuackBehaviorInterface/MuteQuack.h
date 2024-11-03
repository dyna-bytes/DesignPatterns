#ifndef __MUTEQUACK_H
#define __MUTEQUACK_H
#include "QuackBehaviorInterface/QuackBehavior.h"

typedef struct MuteQuack {
    QuackBehavior super;
} MuteQuack;

void initMuteQuack(MuteQuack *self);

#endif