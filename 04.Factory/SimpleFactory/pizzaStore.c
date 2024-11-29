#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "simplePizzaFactory.h"
#include "pizzaStore.h"

struct Pizza *orderPizza(struct PizzaStore *this, const char *type) {
    struct Pizza *pizza = NULL;

    pizza = this->factory->createPizza(type);

    pizza->prepare(pizza);
    pizza->bake(pizza);
    pizza->cut(pizza);
    pizza->box(pizza);
    return pizza;
}

void cleanupPizza(struct PizzaStore *this, struct Pizza *pizza) {
    this->factory->deletePizza(pizza);
}

struct PizzaStore *createPizzaStore(struct SimplePizzaFactory *factory) {
    struct PizzaStore *store = NULL;
    store = malloc(sizeof(*store));

    store->factory = factory;
    store->orderPizza = orderPizza;
    store->cleanupPizza = cleanupPizza;
    return store;
}

void deletePizzaStore(struct PizzaStore *store) {
    free(store);
}

int main() {
    struct SimplePizzaFactory *factory = createSimplePizzaFactory();
    struct PizzaStore *store = createPizzaStore(factory);

    struct Pizza *pizza = store->orderPizza(store, "cheese");
    printf("done ordering %s pizza\n", pizza->name);

    store->cleanupPizza(store, pizza);
    deletePizzaStore(store);
    deleteSimplePizzaFactory(factory);
    printf("done cleaning up all pizza store\n");
    return 0;
}