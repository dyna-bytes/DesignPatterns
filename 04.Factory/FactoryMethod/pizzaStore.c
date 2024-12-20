#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pizzaStore.h"

struct Pizza *orderPizza(struct PizzaStore *this, const char *type) {
    struct Pizza *pizza = NULL;

    pizza = __ABSTRACT__ this->createPizza(type);

    pizza->prepare(pizza);
    pizza->bake(pizza);
    pizza->cut(pizza);
    pizza->box(pizza);
    return pizza;
}

void cleanupPizza(struct PizzaStore *this, struct Pizza *pizza) {
    if (pizza->toppings)
        list_erase(pizza->toppings);
    free(pizza);
}

struct PizzaStore *createPizzaStore() {
    struct PizzaStore *store = NULL;
    store = malloc(sizeof(*store));

    store->orderPizza = orderPizza;
    store->cleanupPizza = cleanupPizza;
    return store;
}

void deletePizzaStore(void *store) {
    free(store);
}