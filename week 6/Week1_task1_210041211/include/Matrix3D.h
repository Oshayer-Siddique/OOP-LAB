#ifndef MATRIX3D_H
#define MATRIX3D_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Matrix3D
{

    private:

    vector<vector<double>> m;
    public:
        Matrix3D(){};
        Matrix3D(vector<vector<double>>mat1): m(mat1){};
        ~Matrix3D(){}


        double det() const;
        void display();
        vector<vector<double>> inverse();
        Matrix3D operator+(const Matrix3D& mat2) const;
                Matrix3D operator-(const Matrix3D& mat2) const;
        Matrix3D operator*(const Matrix3D& mat2) const;


    protected:
};

#endif // MATRIX3D_H
