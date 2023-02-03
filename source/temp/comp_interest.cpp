#include <iostream>
#include <math.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

void printout(double v)
{
    printf("%.12f\n", v);
}

double comp_interest(double n)
{
    return pow((1.0 + (1.0 / n)), n);
}

int main()
{
    setprecision(6);
    double cp = comp_interest(1000000.0);
    printout(cp);
    return 0;
}