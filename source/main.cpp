#include <iostream>
#include <stdio.h>
#include "rectangle.h"
#include "circle.h"

using namespace std;

int main(){
    Rectangle rect;
    rect.setWidth(40.123);
    rect.setHeight(5.2);
    printf("%lf3\n", rect.getArea());
    printf("%lf3\n", rect.getParameter());

    Circle ccl;
    ccl.setRadius(34.2);
    printf("%lf3\n", ccl.getArea());
    printf("%lf3\n", ccl.getParameter());
    int sd = ccl.getSides();
    printf("%d", &sd);
}