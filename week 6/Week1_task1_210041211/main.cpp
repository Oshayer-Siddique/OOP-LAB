#include <iostream>
#include"Matrix3D.h"
using namespace std;

int main()
{
    vector<vector<double>>m;
    m={ {1,2,3},
        {4,5,6}
    ,   {7,8,5}};
    vector<vector<double>>m1;
    m1={ {1,2,3},
        {4,5,6}
    ,   {7,4,5}};

    Matrix3D mat1;
    Matrix3D mat2(m);
    Matrix3D mat3(m1);

    cout<<mat2.det()<<endl;

    mat2.display();

    mat1=mat2.inverse();
    mat1.display();

    mat1=mat2+mat3;
    mat1.display();

    mat1=mat2-mat3;
    mat1.display();

    mat1=mat2*mat3;
    mat1.display();
}
