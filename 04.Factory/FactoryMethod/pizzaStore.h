#ifndef __PIZZA_STORE_H__
#define __PIZZA_STORE_H__
#include "pizza.h"

struct PizzaStore {
    __ABSTRACT__ struct Pizza *(*createPizza)(const char *type);
    struct Pizza *(*orderPizza)(struct PizzaStore *this, const char *type);
    void (*cleanupPizza)(struct PizzaStore *this, struct Pizza *pizza);
};

struct NYPizzaStore {
    __EXTEND__ struct PizzaStore super;
};

struct ChicagoPizzaStore {
    __EXTEND__ struct PizzaStore super;
};

struct PizzaStore *createPizzaStore(void);
void deletePizzaStore(struct PizzaStore *store);

#endif