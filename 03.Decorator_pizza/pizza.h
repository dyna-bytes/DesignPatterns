#ifndef _PIZZA_H_
#define _PIZZA_H_

// 기본 Pizza 인터페이스
typedef struct Pizza {
    char description[100];
    double (*cost)(struct Pizza*);
    void (*getDescription)(struct Pizza*, char* buffer);
} Pizza;

double basePizzaCost(Pizza* pizza);
void basePizzaDescription(Pizza* pizza, char* buffer);
Pizza* createBasePizza();
void freePizza(Pizza* pizza);

#endif