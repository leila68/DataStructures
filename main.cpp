#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
#include <vector>

#include "Utils.h"
#include "Stack.h"


int main(int argc, char *argv[])
{
    srand((unsigned)time(NULL));

   /* int size =  std::stoi(argv[1]);
    int length =  std::stoi(argv[2]);
    int idx =  std::stoi(argv[3]);
    double valIn =  std::stoi(argv[4]);
    double valDel =  std::stoi(argv[5]);
    initialize_array(size,length,idx,valIn,valDel);*/

    int size =  std::stoi(argv[1]);
    int length =  std::stoi(argv[2]);
    double valIn =  std::stoi(argv[3]);
   // initialize_stack(size,length,valIn);

 //  initialize_queue( size,length ,valIn);

     evaluate_stack(size);


    return 0;
}
