#include <iostream>
using namespace std;

void println(char v[])
{
    printf("%s\n", v);
}

int main()
{
    char introStatement[] = "Hello There!!!";
    double a, b, c;
    a = 1.2232;
    b = 0.931;
    c = a / b;
    printf("%s\n", introStatement);
    printf("%.10lf\n", c);
    return 0;
}
