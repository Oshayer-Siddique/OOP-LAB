#ifndef FLOAT_H
#define FLOAT_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class FLOAT
{

    private:
        float f;
    public:
        FLOAT(){};
        FLOAT(float fl) : f(fl){};
        FLOAT operator+(const FLOAT& other) const;

                FLOAT operator-(const FLOAT& other) const;
                FLOAT operator*(const FLOAT& other) const;
                FLOAT operator/(const FLOAT& other) const;

                operator int();
                void display();

~FLOAT(){}
    protected:
};

#endif // FLOAT_H
