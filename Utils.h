//
// Created by Leila on 5/2/2021.
//

#include "Stack.h"
#include "Queue.h"

#ifndef DATASTRUCTURES_UTILS_H
#define DATASTRUCTURES_UTILS_H

#endif //DATASTRUCTURES_UTILS_H
//using namespace DataStructures;

void initialize_array(int size,int length, int idx, double  valIn, double  valDel);
void initialize_stack(int size, int lng, double pu);
void initialize_queue(int size, int lng, double in);

/*
void initialize_array(int size,int length, int idx, double  valIn, double  valDel)
{
    Array1 *a1 = new Array1(size);
    a1->random(length);
    a1->print();
   // a1->sort();
  //  a1->print();
    a1->insert(idx,valIn);
    a1->print();
    int *ind = a1->remove2(valDel);

    if (ind[0]<0){
        std::cout<<"This number do not exist in this array"<<"\n";
    }
    else{
        a1->print();
        std::cout<<"indices"<<"\n";
        std::cout<<ind[0]<<",";
        for(int i=1; i<length/2; i++)
        {
            if (ind[i] >= 1)
            {
                std::cout<<ind[i]<<",";
            }
        }
        std::cout<<"\n";
    }

    double x = a1->Max();
    double n = a1->Min();
    std::cout<<"max:"<<x<<","<<"min:"<<n<<"\n";

    delete a1;
    delete []ind;

}

void initialize_stack(int size, int lng, double pu)
{
    Stack *st = new Stack( size);
     st->random(lng);
     st->print();
     st->push_st(pu);
     st->print();
     double p = st->pop_st();
     std::cout<<"pop:"<<p<<"\n";
     st->print();

   delete st;
}
*/
void initialize_queue(int size, int lng, double in)
{
    Queue *q1 = new Queue(size,lng);
    q1->random(lng);
    q1->print_q();
    q1->insert_q(in);
    q1->print_q();
    q1->del_q();
    q1->del_q();
    q1->print_q();

    delete q1;
}