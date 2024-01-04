
#include<iostream>

using namespace std;
int main(void){
    int x = 7;
    int* px = &x;
    std::cout << &x << std::endl;
    std::cout << &px << std::endl;
    std::cout <<sizeof(px) << std::endl;
}