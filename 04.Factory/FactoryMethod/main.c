#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pizza.h"
#include "pizzaStore.h"
#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"

void testNYPizzaStore() {
    struct PizzaStore* nyPizzaStore = (struct PizzaStore* )createNYPizzaStore();

    struct Pizza *pizza = nyPizzaStore->orderPizza(nyPizzaStore, "cheese");
    nyPizzaStore->cleanupPizza(nyPizzaStore, pizza);
    printf("/////////////////////////////////////////////////////\n");

    pizza = nyPizzaStore->orderPizza(nyPizzaStore, "pepperoni");
    nyPizzaStore->cleanupPizza(nyPizzaStore, pizza);
    printf("/////////////////////////////////////////////////////\n");

    pizza = nyPizzaStore->orderPizza(nyPizzaStore, "clam");
    nyPizzaStore->cleanupPizza(nyPizzaStore, pizza);
    printf("/////////////////////////////////////////////////////\n");

    deleteNYPizzaStore(nyPizzaStore);
}

void testChicagoPizzaStore() {
    struct PizzaStore* chicagoPizzaStore = (struct PizzaStore*)createChicagoPizzaStore();

    struct Pizza *pizza = chicagoPizzaStore->orderPizza(chicagoPizzaStore, "cheese");
    chicagoPizzaStore->cleanupPizza(chicagoPizzaStore, pizza);
    printf("/////////////////////////////////////////////////////\n");

    pizza = chicagoPizzaStore->orderPizza(chicagoPizzaStore, "pepperoni");
    chicagoPizzaStore->cleanupPizza(chicagoPizzaStore, pizza);
    printf("/////////////////////////////////////////////////////\n");

    pizza = chicagoPizzaStore->orderPizza(chicagoPizzaStore, "clam");
    chicagoPizzaStore->cleanupPizza(chicagoPizzaStore, pizza);
    printf("/////////////////////////////////////////////////////\n");

    deleteChicagoPizzaStore(chicagoPizzaStore);
}

int main() {
    testNYPizzaStore();
    testChicagoPizzaStore();

    return 0;
}