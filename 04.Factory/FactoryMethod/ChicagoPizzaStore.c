#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ChicagoPizzaStore.h"
#include "linkedList.h"

struct ChicagoStyleCheesePizza *createChicagoStyleCheesePizza() {
    struct Pizza *pizza = malloc(sizeof(struct ChicagoStyleCheesePizza));

    pizza->name = "Chicago Style Deep Dish Cheese";
    pizza->dough = "Very Thick Crust";
    pizza->sauce = "Plum Tomato";

    if (!pizza->toppings)
        pizza->toppings = list_create();

    list_node_insert(pizza->toppings,
        list_node_create("Mozzarella cheese"));

    return (struct ChicagoStyleCheesePizza *)pizza;
}

static struct Pizza *createPizza(const char *type) {
    struct Pizza *pizza;
    if (!strcmp(type, "cheese")) {
        pizza = (struct Pizza *)createChicagoStyleCheesePizza();
    } else {
        pizza = (struct Pizza *)malloc(sizeof(*pizza));

        pizza->name = type;
        pizza->dough = "default";
        pizza->sauce = "default";
        pizza->toppings = list_create();
    }

    pizza->prepare = prepare;
    pizza->bake = bake;
    pizza->cut = cut;
    pizza->box = box;

    return pizza;
}

struct ChicagoPizzaStore *createChicagoPizzaStore() {
    struct PizzaStore *chicagoPizzaStore = createPizzaStore();
    chicagoPizzaStore->createPizza = createPizza;
    return (struct ChicagoPizzaStore *)chicagoPizzaStore;
}

void deleteChicagoPizzaStore(void *chicagoPizzaStore) {
    deletePizzaStore(chicagoPizzaStore);
}