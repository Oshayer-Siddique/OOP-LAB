#include <iostream>
#include "Coordinate.h"

using namespace std;

int main()
{
    Coordinate c4;
    Coordinate c1(1.0,1.0),c2(-1.0,-1.0),c3(2.0,3.0);
    cout<<(c1==c2);
    cout<<(c1>c2);
    cout<<(c1>=c2);
    cout<<(c3>c2);
    cout<<(c3>c1);
    cout<<c1.getDistance(c2);
    c1++;
    c2--;
    cout<<c1.getX()<<" "<<c1.getY()<<endl;
    cout<<c2.getX()<<" "<<c2.getY()<<endl;


}
