//
// Created by Leila on 5/3/2021.
//

#include "Stack.h"
#include <iostream>
#include <cmath>




Stack::Stack(int s1):Array1(s1)
{

}

Stack::~Stack()
{

}

bool Stack::full_st()
{

    if (lng == size-1)
        return true;
    else
        return false;

}

bool Stack::empty_st()
{
    if (lng == -1)
        return true;
    else
        return false;
}

bool  Stack::push_st(int num)
{

    bool  f = full_st();
    if (f == false)
    {

        array[lng] = num;
        lng++;
        return true;
    }
    else
        return false;
}

double Stack::pop_st()
{
    //double temp=0;
    bool e = empty_st();
    if (e == false)
    {
        double temp = array[--lng];
        return temp;
    }
    else
        return 0;
}

