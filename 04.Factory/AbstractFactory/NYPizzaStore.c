#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NYPizzaIngredientFactory.h"
#include "pizza.h"
#include "cheesePizza.h"
#include "clamPizza.h"
#include "veggiePizza.h"

struct Pizza *createPizza(const char *type) {
    struct Pizza *pizza = NULL;
    struct PizzaIngredientFactory *ingredientFactory =
        createNYPizzaIngredientFactory();

    if (!strcmp(type, "cheese")) {
        pizza = createCheesePizza(ingredientFactory);
    } else if (!strcmp(type, "clam")) {
        pizza = createClamPizza(ingredientFactory);
    } else if (!strcmp(type, "veggie")) {
        pizza = createVeggiePizza(ingredientFactory);
    } else if (!strcmp(type, "pepperoni")) {

    }

    pizza->bake = bake;
    pizza->cut = cut;
    pizza->box = box;
    pizza->setName = setName;
    pizza->getName = getName;
    pizza->toString = toString;
    pizza->setName(pizza, type);
    return pizza;
}

struct Pizza *orderPizza(const char *type) {
    struct Pizza *pizza = createPizza(type);

    pizza->prepare(pizza);
    pizza->bake(pizza);
    pizza->cut(pizza);
    pizza->box(pizza);
    return pizza;
}

void cleanupPizza(struct Pizza *pizza) {
    struct PizzaIngredientFactory *ingredientFactory;

    if (!strcmp(pizza->name, "cheese")) {
        ingredientFactory =
            container_of(pizza, struct CheesePizza, super)->ingredientFactory;
        deleteCheesePizza(pizza);
    } else if (!strcmp(pizza->name, "clam")) {
        ingredientFactory =
            container_of(pizza, struct ClamPizza, super)->ingredientFactory;
        deleteClamPizza(pizza);
    } else if (!strcmp(pizza->name, "veggie")) {
        ingredientFactory =
            container_of(pizza, struct VeggiePizza, super)->ingredientFactory;
        deleteVeggiePizza(pizza);
    }

    deleteNYPizzaIngredientFactory(ingredientFactory);
}

int main() {
    struct Pizza *pizza = orderPizza("cheese");
    cleanupPizza(pizza);

    pizza = orderPizza("clam");
    cleanupPizza(pizza);

    pizza = orderPizza("veggie");
    cleanupPizza(pizza);
    return 0;
}