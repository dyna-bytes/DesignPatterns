#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "simplePizzaFactory.h"
#include "pizza.h"

struct Pizza *createPizza(const char *type) {
    struct Pizza *pizza = NULL;

    if (!strncmp(type, "cheese", strlen("cheese"))) {
        pizza = (struct CheesePizza*)malloc(sizeof(struct CheesePizza));
    } else if (!strncmp(type, "pepperoni", strlen("pepperoni"))) {
        pizza = (struct PepperoniPizza*)malloc(sizeof(struct PepperoniPizza));
    } else if (!strncmp(type, "clam", strlen("clam"))) {
        pizza = (struct ClamPizza*)malloc(sizeof(struct ClamPizza));
    } else if (!strncmp(type, "veggie", strlen("veggie"))) {
        pizza = (struct VeggiePizza*)malloc(sizeof(struct VeggiePizza));
    }

    pizza->name = type;
    pizza->prepare = prepare;
    pizza->bake = bake;
    pizza->cut = cut;
    pizza->box = box;
    return pizza;
}

void deletePizza(struct Pizza *pizza) {
    free(pizza);
}

struct SimplePizzaFactory *createSimplePizzaFactory() {
    struct SimplePizzaFactory *factory = NULL;

    factory = malloc(sizeof(*factory));
    factory->createPizza = createPizza;
    factory->deletePizza = deletePizza;
    return factory;
}

void deleteSimplePizzaFactory(struct SimplePizzaFactory *factory) {
    free(factory);
}
