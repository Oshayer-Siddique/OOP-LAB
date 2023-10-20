#include <iostream>
#include"Counter.h"
using namespace std;

int main()
{

    Counter c1,c2,c3;
    c1.setIncrementStep(2);
    c2.setIncrementStep(3);
    c3++;
    c2.increment();
    c1=c2+c3;
    cout<<c1.getCount()<<" "<<c2.getCount()<<" "<<c3.getCount();
    return 0;
}
