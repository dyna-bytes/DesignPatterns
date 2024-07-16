#include "DuckClass/Duck.h"

static void __performFly(Duck *self) {
    FlyBehavior *flyBehavior = self->flyBehvior;
    flyBehavior->fly();
}

static void __performQuack(Duck *self) {
    QuackBehavior *quackBehavior = self->quackBehavior;
    quackBehavior->quack();
}

void __setFlyBehavior(Duck *self, FlyBehavior *fb) {
    self->flyBehvior = fb;
}

void __setQuackBehavior(Duck *self, QuackBehavior *qb) {
    self->quackBehavior = qb;
}

void __initDuck(Duck *self,
    void (*swim)(struct Duck *self),
    void (*display)(struct Duck *self))
{
    self->swim = swim;
    self->display = display;
    self->performFly = __performFly;
    self->performQuack = __performQuack;
    self->setFlyBehavior = __setFlyBehavior;
    self->setQuackBehavior = __setQuackBehavior;
}
