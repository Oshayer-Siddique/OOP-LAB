#include <iostream>
#include"FLOAT.h"
using namespace std;

int main()
{
    FLOAT f1(5.50);
    FLOAT f2(6.60);
    FLOAT f3;
    FLOAT f4;
    int i=f1;
    cout<<i<<endl;

    f3=f1+f2;
    f4=f2-f1;
    f3.display();
    f4.display();

    f3=f1*f2;
    f4=f1/f2;

    f3.display();
    f4.display();
}
