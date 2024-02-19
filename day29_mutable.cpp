#include <iostream>

// mutable and mutex go together
// m & m rules

class A{
    public:
    int geta(int b)const{
        a = b;
        return a;
    }
    mutable int a;
};
int main(){
    A a;
   std::cout << a.geta(6);

}