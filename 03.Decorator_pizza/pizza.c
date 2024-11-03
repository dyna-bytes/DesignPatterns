#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pizza.h"
#include "cheese_pizza.h"
#include "pepperoni_pizza.h"

double basePizzaCost(Pizza* pizza) {
    return 5.00;
}

void basePizzaDescription(Pizza* pizza, char* buffer) {
    strcat(buffer, "Basic Pizza");
}

Pizza* createBasePizza() {
    Pizza* pizza = (Pizza*)malloc(sizeof(Pizza));
    strcpy(pizza->description, "Basic Pizza");
    pizza->cost = basePizzaCost;
    pizza->getDescription = basePizzaDescription;
    return pizza;
}

// 피자의 메모리 해제를 위한 함수
void freePizza(Pizza* pizza) {
    if (pizza == NULL) return;

    // 데코레이터인지 확인하고, 내부 피자 메모리 해제
    if (strcmp(pizza->description, "Cheese Topping") == 0) {
        CheeseDecorator* cheesePizza = (CheeseDecorator*)pizza;
        freePizza(cheesePizza->wrappedPizza);  // 내부 피자를 먼저 해제
        free(cheesePizza);                     // 현재 피자 해제
    }
    else if (strcmp(pizza->description, "Pepperoni Topping") == 0) {
        PepperoniDecorator* pepperoniPizza = (PepperoniDecorator*)pizza;
        freePizza(pepperoniPizza->wrappedPizza);  // 내부 피자를 먼저 해제
        free(pepperoniPizza);                     // 현재 피자 해제
    }
    else {
        free(pizza);  // 기본 피자 해제
    }
}
