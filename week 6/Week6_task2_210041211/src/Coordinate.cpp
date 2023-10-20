#include "Coordinate.h"


    Coordinate::~Coordinate()
    {

    }

    Coordinate::Coordinate()
    {

    }
    double  Coordinate::getDistance() const {
        return sqrt(abscissa * abscissa + ordinate * ordinate);
    }
    double Coordinate::getDistance(const Coordinate& temp) const {
        return sqrt(pow((abscissa -temp.abscissa),2) + pow((ordinate -temp.ordinate),2));
    }

    bool Coordinate::operator>(const Coordinate& temp) const {
        return getDistance() > temp.getDistance();
    }

    bool Coordinate::operator<(const Coordinate& temp) const {
        return getDistance() < temp.getDistance();
    }

    bool Coordinate::operator>=(const Coordinate& temp) const {
        return getDistance() >= temp.getDistance();
    }

    bool Coordinate::operator<=(const Coordinate& temp) const {
        return getDistance() <= temp.getDistance();
    }

    bool Coordinate::operator==(const Coordinate& temp) const {
        return getDistance() == temp.getDistance();
    }

    bool Coordinate::operator!=(const Coordinate& temp) const {
        return getDistance() != temp.getDistance();
    }
    void Coordinate::move_x(float val){
        abscissa+=val;
    }
    void Coordinate::move_y(float val)
    {
        ordinate+=val;
    }


            void Coordinate::Move(float val)
            {

                move_x(val);
                move_y(val);
            }
            float Coordinate::getX()
            {
                return abscissa;
            }
            float Coordinate::getY()
            {
                return ordinate;
            }




                Coordinate& Coordinate::  operator++() {
        Move(1);
        return *this;
    }

    Coordinate Coordinate :: operator++(int) {
        Coordinate temp = *this;
        Move(1);
        return temp;
    }


    Coordinate Coordinate :: operator--(int) {
        Coordinate temp = *this;
        Move(-1);
        return temp;
    }



    Coordinate& Coordinate:: operator--() {
        Move(-1);
        return *this;
    }



