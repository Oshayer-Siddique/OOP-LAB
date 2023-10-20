#include "FLOAT.h"

 FLOAT FLOAT::operator+(const FLOAT& other) const{
                FLOAT temp;
                temp.f=(f+other.f);
            return temp ;
        }

                FLOAT FLOAT::operator-(const FLOAT& other) const{
                    FLOAT temp;
                    temp.f=(f-other.f);
                    return temp ;

        }
                FLOAT FLOAT::operator*(const FLOAT& other) const{
                FLOAT temp;
                temp.f=(f*other.f);
            return temp;
        }
                FLOAT FLOAT::operator/(const FLOAT& other) const{

                FLOAT temp;
                temp.f=(f/other.f);
            return temp;
        }

                FLOAT:: operator int() {
        return int(f);
    }

    void FLOAT::display()
    {
        cout<<f<<endl;
    }

