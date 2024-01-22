#include <iostream>

/*
Which C++ 'feature' would you use to cast a pointer to Class B into a
derived Class D?

Base * B = new Base;
Derived* D = new Derived;

*/

class Base{
    public:
    virtual void somefunction(){
    std::cout <<"Base::Somefunction!"<<std::endl;
    } 
    };
class Derived: public Base{int a;
    public:
    virtual void somefunction() override{
        std::cout << "Derived::someFunction\n";
    }
};
int main(){
    Base * B = new Base;
    Derived* D = new Derived;
    if(static_cast<Derived*> (B)){
        std::cout <<"This works!"<<std::endl;
    }

}