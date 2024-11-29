#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NYPizzaStore.h"
#include "linkedList.h"

struct NYStyleCheesePizza *createNYStyleCheesePizza() {
    struct Pizza *pizza = malloc(sizeof(struct NYStyleCheesePizza));

    pizza->name = "New York Style Cheese";
    pizza->dough = "Thin Crust";
    pizza->sauce = "Marinara";

    if (!pizza->toppings)
        pizza->toppings = list_create();

    list_node_insert(pizza->toppings,
        list_node_create("Mozzarella cheese"));

    return (struct NYStyleCheesePizza *)pizza;
}

static struct Pizza *createPizza(const char *type) {
    struct Pizza *pizza;
    if (!strcmp(type, "cheese")) {
        pizza = (struct Pizza *)createNYStyleCheesePizza();
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

struct NYPizzaStore *createNYPizzaStore() {
    struct PizzaStore *nyPizzaStore = createPizzaStore();
    nyPizzaStore->createPizza = createPizza;
    return (struct NYPizzaStore *)nyPizzaStore;
}

void deleteNYPizzaStore(void *nyPizzaStore) {
    deletePizzaStore(nyPizzaStore);
}