#include <stdlib.h>
#include "NYPizzaIngredientFactory.h"

static struct Dough *createDough(void) {
    struct Dough *dough = malloc(sizeof(struct ThinCrustDough));
    dough->name = "NY Style Dough";
    return dough;
}

static void freeDough(void *dough) {
    if (dough) free(dough);
}

static struct Sauce *createSauce(void) {
    struct Sauce *sauce = malloc(sizeof(struct MarinaraSauce));
    sauce->name = "NY Style Sauce";
    return sauce;
}

static void freeSauce(void *sauce) {
    if (sauce) free(sauce);
}

static struct Cheese *createCheese(void) {
    struct Cheese *cheese = malloc(sizeof(struct ReggianoCheese));
    cheese->name = "NY Style Cheese";
    return cheese;
}

static void freeCheese(void *cheese) {
    if (cheese) free(cheese);
}

static struct Veggies **createVeggies(void) {
    struct Veggies **veggies = malloc(
        sizeof(struct Veggies *) * (PizzaIngredientVeggiesSize+1));

    for (int i = 0; i < PizzaIngredientVeggiesSize; i++) {
        veggies[i] = malloc(sizeof(struct Veggies));
        veggies[i]->name = VEGGIES_STRING[i];
    }

    veggies[PizzaIngredientVeggiesSize] = NULL;
    return veggies;
}

static void freeVeggies(void **veggies) {
    if (!veggies) return;

    for (struct Veggies **veggie = veggies; *veggie; veggie++) {
        if (*veggie)
            free(*veggie);
    }

    free(veggies);
}

static struct Pepperoni *createPepperoni(void) {
    struct Pepperoni *pepperoni = malloc(sizeof(struct Pepperoni));
    pepperoni->name = "NY Styel Pepperoni";
    return pepperoni;
}

static void freePepperoni(void *pepperoni) {
    if (pepperoni) free(pepperoni);
}

static struct Clams *createClam(void) {
    struct Clams *clams = malloc(sizeof(struct FreshClams));
    clams->name = "NY Style Clams";
    return clams;
}

static void freeClam(void *clam) {
    if (clam) free(clam);
}

struct NYPizzaIngredientFactory *createNYPizzaIngredientFactory(void) {
    struct PizzaIngredientFactory *pizzaIngredientFactory = malloc(
        sizeof(*pizzaIngredientFactory)
    );

    pizzaIngredientFactory->createDough = createDough;
    pizzaIngredientFactory->createSauce = createSauce;
    pizzaIngredientFactory->createCheese = createCheese;
    pizzaIngredientFactory->createVeggies = createVeggies;
    pizzaIngredientFactory->createPepperoni = createPepperoni;
    pizzaIngredientFactory->createClam = createClam;

    pizzaIngredientFactory->deleteDough = freeDough;
    pizzaIngredientFactory->deleteSauce = freeSauce;
    pizzaIngredientFactory->deleteCheese = freeCheese;
    pizzaIngredientFactory->deleteVeggies = freeVeggies;
    pizzaIngredientFactory->deletePepperoni = freePepperoni;
    pizzaIngredientFactory->deleteClam = freeClam;
}

void deleteNYPizzaIngredientFactory(void *nyPizzaIngredientFactory) {
    if (nyPizzaIngredientFactory)
        free(nyPizzaIngredientFactory);
}