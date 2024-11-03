#ifndef _PEPPERONI_PIZZA_H_
#define _PEPPERONI_PIZZA_H_
#include "pizza.h"

// 페퍼로니 토핑 데코레이터 정의
typedef struct PepperoniDecorator {
    Pizza pizza;
    Pizza* wrappedPizza; // 데코레이션할 피자 객체
} PepperoniDecorator;

double pepperoniCost(Pizza* pizza);
void pepperoniDescription(Pizza* pizza, char* buffer);
Pizza* addPepperoni(Pizza* basePizza);

#endif