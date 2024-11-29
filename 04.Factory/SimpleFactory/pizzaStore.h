#ifndef __PIZZA_STORE_H__
#define __PIZZA_STORE_H__
#include "pizza.h"

struct PizzaStore {
    struct SimplePizzaFactory *factory;
    struct Pizza *(*orderPizza)(struct PizzaStore *this, const char *type);
    void (*cleanupPizza)(struct PizzaStore *this, struct Pizza *pizza);
};

struct PizzaStore *createPizzaStore(struct SimplePizzaFactory *factory);
void deletePizzaStore(struct PizzaStore *store);

#endif