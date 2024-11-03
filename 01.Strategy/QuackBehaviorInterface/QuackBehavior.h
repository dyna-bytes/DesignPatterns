#ifndef __QUACKBEHAVIOR_H
#define __QUACKBEHAVIOR_H

// Interface
typedef struct QuackBehavior {
    void (*quack)(void);
} QuackBehavior;

void __initQuackBehavior(QuackBehavior *self,
    void (*quack)(void));

#endif