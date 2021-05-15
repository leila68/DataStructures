//
// Created by Leila on 5/4/2021.
//

#include <iostream>
#include "Queue.h"



Queue::Queue(int s, int l):Array1(s)
{
    front = 0;
    rear = l;
   // size = s;
    //array = new double [size];
}
Queue::~Queue()
{

}

bool Queue::empty_q()
{
    if (rear == front)
        return true;
    else
        return false;
}
bool Queue::full_q()
{

    if (rear == size)
    {
        return true;
    }
    else
        return false;
}
void Queue::insert_q(double val)
{
    if (rear == size)
    {
        std::cout<<"queue is full!"<<"\n";
    }
    else{
        array[rear] = val;
        rear++;
    }
}
void Queue::del_q()
{
    if (front == rear)
    {
        std::cout<<"queue is empty!"<<"\n";
    }
    else
    {
        array[front] = 0;
        front++;
    }
}
void  Queue::print_q()
{
    for(int i=front; i<rear; i++)
    {
        std::cout<<array[i]<<", ";
    }
    std::cout<<"\n";
}