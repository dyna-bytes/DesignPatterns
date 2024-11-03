#include "QuackBehaviorInterface/QuackBehavior.h"

void __initQuackBehavior(QuackBehavior *self, void (*quack)(void)) {
    self->quack = quack;
}