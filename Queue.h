//
// Created by Leila on 5/4/2021.
//

#ifndef DATASTRUCTURES_QUEUE_H
#define DATASTRUCTURES_QUEUE_H

#include "Array1.h"


    class Queue: public Array1
    {

       int rear;
       int front;

    public:
        Queue(int s, int l);
        bool empty_q();
        bool full_q();
        void insert_q(double val);
        void del_q();
        void  print_q();
        ~Queue();
    };



#endif //DATASTRUCTURES_QUEUE_H
