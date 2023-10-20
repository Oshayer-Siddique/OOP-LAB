#include<iostream>

using namespace std;


class Shape{
    public:
        string Shapename;

        Shape(string name):Shapename(name){}
            
    
        void whoami(){
            cout<<"I am a "<<Shapename<<endl;
        }

};


class Twodimensional:public Shape{
    public:
        Twodimensional(string name):Shape(name){}
        void whoami(){
            Shape::whoami();
            cout<<"i am a Two dimensional"<<endl;
        }

};

class Square:public Twodimensional{
    private:
        double length;
    public:
        Square(string name,double s):Twodimensional(name),length(s){}
        void area_perimeter(){
            double area = length * length;
            double perimeter = 4 * length;
            cout<<"Area = "<<area<<"perimeter = "<<perimeter<<endl;
        }

};

int main(){

    Square A("Square",5);
    A.whoami();
    A.area_perimeter();

}