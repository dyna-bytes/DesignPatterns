#ifndef __DUCK_H
#define __DUCK_H
#include "FlyBehaviorInterface/FlyBehavior.h"
#include "QuackBehaviorInterface/QuackBehavior.h"

// Abstract Class
typedef struct Duck {
    FlyBehavior *flyBehvior;
    QuackBehavior *quackBehavior;

    // Abstract Methods
    void (*swim)(struct Duck *self);
    void (*display)(struct Duck *self);
    void (*performFly)(struct Duck *self);
    void (*performQuack)(struct Duck *self);
    void (*setFlyBehavior)(struct Duck *self, FlyBehavior *fb);
    void (*setQuackBehavior)(struct Duck *self, QuackBehavior *qb);
} Duck;

void __initDuck(Duck *self,
    void (*swim)(struct Duck *self),
    void (*display)(struct Duck *self));
#endif