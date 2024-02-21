#include <iostream>

struct MyStruct{

    void Function(){
        auto f = [obj=*this]() mutable{
          obj.counter++;
          std::cout << "counter inside lambda: "<< obj.counter << std::endl;
        };

        f();
        std::cout << "counter: "<< counter << std::endl;
    }
    int counter{0};
};
int main(){
    MyStruct instance;
    instance.Function();
    instance.Function();
    instance.Function();
    instance.Function();
}