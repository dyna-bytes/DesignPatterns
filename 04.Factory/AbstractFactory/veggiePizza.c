#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "veggiePizza.h"

static void prepare(struct Pizza *this) {
    struct VeggiePizza *veggiePizza =
        container_of(this, struct VeggiePizza, super);

    struct PizzaIngredientFactory *ingredientFactory =
        veggiePizza->ingredientFactory;

    this->dough = ingredientFactory->createDough();
    this->sauce = ingredientFactory->createSauce();
    this->cheese = ingredientFactory->createCheese();
    this->veggies = ingredientFactory->createVeggies();

    printf("preparing %s\n", this->name);
    printf("preparing %s\n", this->dough->name);
    printf("preparing %s\n", this->sauce->name);
    printf("preparing %s\n", this->cheese->name);

    printf("preparing");
    for (struct Veggies **veggie = this->veggies; *veggie; veggie++)
        printf(" %s", (*veggie)->name);
    printf("\n");
}

struct VeggiePizza *createVeggiePizza(struct PizzaIngredientFactory *ingredientFactory) {
    struct VeggiePizza *veggiePizza = malloc(sizeof(*veggiePizza));

    veggiePizza->super.prepare = prepare;
    veggiePizza->ingredientFactory = ingredientFactory;
    return veggiePizza;
}

void deleteVeggiePizza(struct Pizza *pizza) {
    struct VeggiePizza *veggiePizza =
        container_of(pizza, struct VeggiePizza, super);

    struct PizzaIngredientFactory *ingredientFactory =
        veggiePizza->ingredientFactory;

    ingredientFactory->deleteCheese(pizza->cheese);
    ingredientFactory->deleteDough(pizza->dough);
    ingredientFactory->deleteSauce(pizza->sauce);
    ingredientFactory->deleteVeggies(pizza->veggies);

    free(veggiePizza);
}