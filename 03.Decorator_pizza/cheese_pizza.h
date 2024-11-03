#ifndef _CHEESE_PIZZA_H_
#define _CHEESE_PIZZA_H_
#include "pizza.h"

// 치즈 토핑 데코레이터 정의
typedef struct CheeseDecorator {
    Pizza pizza;
    Pizza* wrappedPizza; // 데코레이션할 피자 객체
} CheeseDecorator;

double cheeseCost(Pizza* pizza);
void cheeseDescription(Pizza* pizza, char* buffer);
Pizza* addCheese(Pizza* basePizza);

#endif