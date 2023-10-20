#include "Counter.h"

    void Counter::setIncrementStep(int step_val){

    incrementStep=step_val;

    }
    int Counter::getCount()
    {

        return count;
    }
    void Counter:: increment(){
    count+=incrementStep;
    }
    void Counter::resetCount()
    {
        count=0;

    }










    bool Counter::operator>(const Counter& temp) const {
        return count>temp.count;
    }

    bool Counter::operator<(const Counter& temp) const {
        return count<temp.count;
    }

    bool Counter::operator>=(const Counter& temp) const {
      return  count>=temp.count;
    }

    bool Counter::operator<=(const Counter& temp) const {
        return count<=temp.count;
    }

    bool Counter::operator==(const Counter& temp) const {
       return count==temp.count;
    }

    bool Counter::operator!=(const Counter& temp) const {
        return count!=temp.count;
    }







                Counter& Counter::  operator++() {
            increment();
            return *this;
    }

    Counter Counter :: operator++(int) {
        Counter temp = *this;
        increment();
        return temp;
    }


    Counter Counter :: operator--(int) {
        Counter temp(*this);
        count-=incrementStep;
        return temp;
    }



    Counter& Counter:: operator--() {
        count-=incrementStep;
        return *this;
    }

         Counter Counter::operator+(const Counter& other) const{
                Counter temp;
                temp.count=(count+other.count);
            return temp ;
         }

      /*   Counter& Counter::operator+=(const Counter& other) const
         {
                count+=other.count;
                if(other.incrementStep>incrementStep)
                    incrementStep=other.incrementStep;
            return *this ;
         }*/

