//
// Created by Leila on 5/2/2021.
//


#include <iostream>
#include <cmath>
#include "Array1.h"




Array1::Array1(int s)
{
    size = s;
    array = new double [size]();
}

Array1::~Array1()
{
   delete []array;
}

void Array1::random(int l)
{
    lng = l;
    if (lng>size)
    {
          std::cout<<"size of array is too big"<<"\n";
    }
    else
    {
        for(int i=0; i<lng; i++)
        {
             array[i] = (rand() % 10) + 1;
           // array[i] = i+1;
        }
        std::cout<<"\n";
    }

}

void Array1::print()
{
    for(int i=0; i<lng; i++)
    {
        std::cout<<array[i]<<", ";
    }
    std::cout<<"\n";
}

void  Array1::sort()
{
    int temp = 0;
    for(int i=0; i<lng; i++)
    {
        for(int j=i+1;j<lng; j++ )
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;

            }
        }

    }
}

void Array1::insert(int i, double v)
{
    int idx = i;
    double val = v;



    if (lng+1>size)
    {
        std::cout<<"size of array is too big"<<"\n";
    }
    else {
        for (int i = 0; i < lng+1; ++i)
        {
            if (i == idx)
            {
                for(int j=lng; j>i; j--)
                {
                    array[j] = array[j-1];
                }
                array[i] = val;
            }
        }
    }

lng++;

}

int Array1::remove(double  v)
{
    double  val = v;
    int idx = -1;

    for (int i = 0; i < lng; i++)
    {
        if (array[i] == val)
        {
            idx = i;
            if (i==lng-1)
            {
                array[i] = 0;
                break;
            }
            if(i<lng-1)
            {
                do
                {
                    array[i] = array[i+1];
                    i++;
                }while(i<lng-1);
                i = idx--;
            }
        }

    }
    lng--;
    return idx;
}

int* Array1::remove2(double  v)
{
    double  val = v;
    int *idx = new int[lng/2]();

    int c=0;
    for (int i = 0; i < lng; i++)
    {
        if (array[i] == val)
        {
            idx[c] = i;
            c++;

        }
    }

    if (c==0)
    {
        idx[0] = -1;
        return idx;
    }

    for(int i=0; i<c; i++)
    {
        for(int j=idx[i]-i; j<lng-1; j++)
        {
            array[j] = array[j+1];
        }
    }


    lng -= c;
    return idx;
}

double Array1::Max()
{
    double max = 0;

    for(int i=0; i<lng; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

double Array1::Min()
{
    double min = array[0];

    for(int i=0; i<lng; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return  min;
}
