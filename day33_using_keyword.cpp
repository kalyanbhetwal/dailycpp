#include <iostream>

using void_t = void;

template<class T,size_t>
struct DataStructure{
    //some data structure
};

template<class T>
using DataStructure_10 = DataStructure<T,10>;

int main(){
    DataStructure_10<int>a;
    DataStructure_10<float>a;
}