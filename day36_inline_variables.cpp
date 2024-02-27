#include <iostream>

struct Struct{
    inline static int SomeValue = 10;
};

int main(){
    //Struct s;
    std::cout << Struct::SomeValue;
}