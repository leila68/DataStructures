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

double Stack::evaluate_postfix(char* exp)
{
   for (int i=0; exp[i]; i++)
   {
       if(isdigit(exp[i]))
       {
           push_st(exp[i]-48);
       }
       else
       {
           int val1 = pop_st();
           int val2 = pop_st();
           switch (exp[i])
           {
               case '+': push_st( val2 + val1); break;
               case '-': push_st(val2 - val1); break;
               case '*': push_st( val2 * val1); break;
               case '/': push_st( val2/val1); break;
           }
       }
   }
    return array[0];
}
