//
// Created by Leila on 5/2/2021.
//

#ifndef DATASTRUCTURES_ARRAY1_H
#define DATASTRUCTURES_ARRAY1_H

#include <string>

using namespace std;

 class Array1
   {
    protected:
        int size=0;
        int lng = 0;

    public:
        double *array;
        ~Array1();
        Array1(int s);
        void random(int l);
        void print();
        void sort();
        void insert(int i, double v);
        int remove(double  v);
        int* remove2(double  v);
        double Max();
        double Min();

    };
#endif //DATASTRUCTURES_ARRAY1_H




