#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pizza.h"
#include "cheese_pizza.h"
#include "pepperoni_pizza.h"

int main() {
    // 기본 피자 생성
    Pizza* myPizza = createBasePizza();

    // 치즈와 페퍼로니 토핑을 추가
    myPizza = addCheese(myPizza);
    myPizza = addPepperoni(myPizza);

    // 최종 설명 및 가격 계산 출력
    char descriptionBuffer[256] = "";  // descriptionBuffer를 main에 선언
    myPizza->getDescription(myPizza, descriptionBuffer);
    printf("Final pizza description: %s\n", descriptionBuffer);
    printf("Total cost: $%.2f\n", myPizza->cost(myPizza));

    // 메모리 해제
    freePizza(myPizza);

    return 0;
}
