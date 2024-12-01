#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cheesePizza.h"

static void prepare(struct Pizza *this) {
    struct CheesePizza *cheesePizza =
        container_of(this, struct CheesePizza, super);

    struct PizzaIngredientFactory *ingredientFactory =
        cheesePizza->ingredientFactory;

    this->dough = ingredientFactory->createDough();
    this->sauce = ingredientFactory->createSauce();
    this->cheese = ingredientFactory->createCheese();

    printf("preparing %s\n", this->name);
    printf("preparing %s\n", this->dough->name);
    printf("preparing %s\n", this->sauce->name);
    printf("preparing %s\n", this->cheese->name);
}

struct CheesePizza *createCheesePizza(struct PizzaIngredientFactory *ingredientFactory) {
    struct CheesePizza *cheesePizza = malloc(sizeof(*cheesePizza));

    cheesePizza->super.prepare = prepare;
    cheesePizza->ingredientFactory = ingredientFactory;
    return cheesePizza;
}

void deleteCheesePizza(struct Pizza *pizza) {
    struct CheesePizza *cheesePizza =
        container_of(pizza, struct CheesePizza, super);

    struct PizzaIngredientFactory *ingredientFactory =
        cheesePizza->ingredientFactory;

    ingredientFactory->deleteCheese(pizza->cheese);
    ingredientFactory->deleteDough(pizza->dough);
    ingredientFactory->deleteSauce(pizza->sauce);
    ingredientFactory->deleteVeggies(pizza->veggies);
    ingredientFactory->deleteClam(pizza->clam);

    free(cheesePizza);
}