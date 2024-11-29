#ifndef __SIMPLE_PIZZA_FACTORY_H__
#define __SIMPLE_PIZZA_FACTORY_H__
#include "pizza.h"

struct SimplePizzaFactory {
    struct Pizza *(*createPizza)(const char *);
    void (*deletePizza)(struct Pizza *pizza);
};

struct SimplePizzaFactory *createSimplePizzaFactory(void);
void deleteSimplePizzaFactory(struct SimplePizzaFactory *factory);

#endif