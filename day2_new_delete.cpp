
#include <iostream>

int main(void){
    int numofstudents = 5;
    int* stdids = new int[numofstudents];

   *(stdids+0) = 1;
   *(stdids+1) = 2;
   *(stdids+2) = 3;
   *(stdids+3) = 4;
   *(stdids+4) = 5;

    std::cout << "Address of 0: "<<(stdids+0) << std::endl;
    std::cout << "Address of 1: "<<(stdids+1) << std::endl;
    std::cout << "Address of 2: "<<(stdids+2) << std::endl;
    std::cout << "Address of 3: "<<(stdids+3) << std::endl;
    std::cout << "Address of 4: "<<(stdids+4) << std::endl;

    delete []stdids;

    
}