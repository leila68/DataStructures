//
// Created by Leila on 5/3/2021.
//

#ifndef DATASTRUCTURES_STACK_H
#define DATASTRUCTURES_STACK_H
#include <string>
#include "Array1.h"


using namespace std;

   class Stack: public Array1
    {
      //  int top;
      //  int size;

        bool full_st();
        bool empty_st();

    public:
        Stack(int s1);

        bool push_st(int num);

        double pop_st();

        double evaluate_postfix(char* exp);

       ~Stack();
    };



#endif //DATASTRUCTURES_STACK_H
