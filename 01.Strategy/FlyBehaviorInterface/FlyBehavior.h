#ifndef __FLYBEHAVIOR_H
#define __FLYBEHAVIOR_H

// Interface
typedef struct FlyBehavior {
    void (*fly)(void);
} FlyBehavior;

void __initFlyBehavior(FlyBehavior *self,
    void (*fly)(void));

#endif