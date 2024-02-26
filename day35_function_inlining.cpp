#include <iostream>

//1. Locality -> We can guess the next instructions easily(hardware)

__attribute__((always_inline)) inline 
int add(int a, int b){
    return a+b;
}
int main(){
    int val = add(4,5);
    return 0;
}