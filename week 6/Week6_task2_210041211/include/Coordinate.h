
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

class Coordinate
{
    private:
        double abscissa;
        double ordinate;
    public:
        Coordinate();
        ~Coordinate();

         Coordinate(double x, double y) : abscissa(x), ordinate(y) {}

    double getDistance() const ;
    double getDistance(const Coordinate& temp) const ;

    bool operator>(const Coordinate& temp) const;

    bool operator<(const Coordinate& temp) const ;
    bool operator>=(const Coordinate& temp) const ;

    bool operator<=(const Coordinate& temp) const;

    bool operator==(const Coordinate& temp) const ;

    bool operator!=(const Coordinate& temp) const ;

    void move_x(float val);
    void move_y(float val);
    void Move(float val);



    float getX();
    float getY();

    Coordinate& operator--();
    Coordinate operator--(int);
    Coordinate operator++(int);
    Coordinate& operator++();





};

