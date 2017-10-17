//
// Created by Owner on 10/17/2017.
//

#ifndef INHERITANCE_COUNTER_H
#define INHERITANCE_COUNTER_H


class Counter
{
// count
protected:
    unsigned int count;
public:
    Counter();      // Constructor no arguments
    Counter(unsigned int count);        // Constructor with one argument

    unsigned int getCount() const;

    void setCount(unsigned int count);

    Counter operator ++();
};

class CountDn: public Counter   // Derived class
{
public:
    Counter operator --();
};


#endif //INHERITANCE_COUNTER_H
