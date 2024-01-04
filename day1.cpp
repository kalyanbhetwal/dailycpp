
#include <iostream>

void foo(){
    //x = 72;
}
int main(void){
    int x = 48;
    int y = 72;
    char a = 'a';
    unsigned char b = 'b';

    std::cout << "x: "<<&x <<std::endl;
    std::cout << "y: " <<&y <<std::endl;
    std::cout << "a: " <<(void*)&a <<std::endl; //sepcial cases for char
    std::cout << "b: " <<(void*)&b <<std::endl; // special cases for char
    std::cout << "fn foo: " <<(void*)&foo <<std::endl; // special cases for char
}


