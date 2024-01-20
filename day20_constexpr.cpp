#include <iostream>

constexpr int add(int a, int b){
    return a + b;
}

int main(){
    constexpr int i = add(1,2);
    return 0;
}