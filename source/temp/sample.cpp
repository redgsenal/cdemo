#include <iostream>
#include <stdio.h>
#include "samplehere.cpp"
using namespace std;

int main()
{
    SampleHere sh(59, "Hello There!!");

    cout << sh.i_num << endl;
    cout << sh.c_val << endl;

    SampleHere sh2(159, "Hi!!!");

    cout << sh2.i_num << endl;
    cout << sh2.c_val << endl;
}
