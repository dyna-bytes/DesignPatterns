#include "FlyBehaviorInterface/FlyBehavior.h"

void __initFlyBehavior(FlyBehavior *self,
    void (*fly)(void))
{
    self->fly = fly;
}