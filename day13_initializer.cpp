#include <iostream>
#include<initializer_list>
using namespace std;

struct UDT{
    UDT(int a, int b, int c){
        std::cout <<"(another) constructor" <<'\n';
    }
    UDT(std::initializer_list<int>data):data(data){
        std::cout <<"initializer list constructor" <<'\n';  
    }
    ~UDT(){ }
    private:
    std::initializer_list<int> data;
};



int main(void){
        int a = 4.2;
        int b(4.2);
        UDT u{1,4,5,6,7,8};
        UDT ut{1,4,5};
}