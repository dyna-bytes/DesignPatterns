#ifndef __PIZZA_INGREDIENT_FACTORY_H__
#define __PIZZA_INGREDIENT_FACTORY_H__
#include <stddef.h>
#define __ABSTRACT__
#define __EXTEND__
#define container_of(ptr, type, member) \
    ((type *)((char *)(ptr) - offsetof(type, member)))

struct Dough { const char *name; };
struct Sauce { const char *name; };
struct Cheese { const char *name; };
struct Veggies { const char *name; };
struct Pepperoni { const char *name; };
struct Clams { const char *name; };

__ABSTRACT__ struct PizzaIngredientFactory {
    struct Dough *(*createDough)(void);
    struct Sauce *(*createSauce)(void);
    struct Cheese *(*createCheese)(void);
    struct Veggies **(*createVeggies)(void);
    struct Pepperoni *(*createPepperoni)(void);
    struct Clams *(*createClam)(void);

    void (*deleteDough)(void *dough);
    void (*deleteSauce)(void *sauce);
    void (*deleteCheese)(void *cheese);
    void (*deleteVeggies)(void **veggies);
    void (*deletePepperoni)(void *pepperoni);
    void (*deleteClam)(void *clam);
};

struct ThinCrustDough {
    __EXTEND__ struct Dough;
};

struct MarinaraSauce {
    __EXTEND__ struct Sauce;
};

struct ReggianoCheese {
    __EXTEND__ struct Cheese;
};

struct Garlic {
    __EXTEND__ struct Veggies;
};

struct Onion {
    __EXTEND__ struct Veggies;
};

struct Mushroom {
    __EXTEND__ struct Veggies;
};

struct RedPepper {
    __EXTEND__ struct Veggies;
};

#define GET_ENUM(ENUM) ENUM
#define GET_STRING(STRING) #STRING
#define FOR_EACH_VEGGIES(VEGGIE)    \
    VEGGIE(Garlic), \
    VEGGIE(Onion),  \
    VEGGIE(Mushroom),   \
    VEGGIE(RedPepper),   \
    VEGGIE(PizzaIngredientVeggiesSize)

enum VEGGIES_ENUM {
    FOR_EACH_VEGGIES(GET_ENUM)
};

static const char *VEGGIES_STRING[] = {
    FOR_EACH_VEGGIES(GET_STRING)
};


struct SlicedPepperoni {
    __EXTEND__ struct Veggies;
};

struct FreshClams {
    __EXTEND__ struct Clams;
};

#endif