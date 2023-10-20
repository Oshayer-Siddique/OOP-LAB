#ifndef COUNTER_H
#define COUNTER_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Counter{

    int count;
    int incrementStep;
public:

    ~Counter(){}


    Counter(int initialCount=0,int initialStep=1)
    {
        count=initialCount;
        incrementStep=initialStep;
    }
    void setIncrementStep(int step_val);
    int getCount();
    void increment();
    void resetCount();




     bool operator>(const Counter& temp) const;

    bool operator<(const Counter& temp) const ;
    bool operator>=(const Counter& temp) const ;

    bool operator<=(const Counter& temp) const;

    bool operator==(const Counter& temp) const ;

    bool operator!=(const Counter& temp) const ;

    Counter& operator+=(const Counter& other) const;



        Counter& operator--();
    Counter operator--(int);
    Counter operator++(int);
    Counter& operator++();

Counter operator+(const Counter& other) const;

};

#endif // COUNTER_H
