#include <iostream>
#include <vector>
#include <algorithm>

struct Value{
     int m_resutl1{0};
     float m_result2{0};

     int operator()(int newResult){
        m_resutl1 = newResult;
        return m_resutl1;
     }
     float operator()(float newResult2){
        m_result2 = newResult2;
        return m_result2;
     }
};

int main(){
    Value v;
    v(42);
    v(42.1f);
    std::cout  << v.m_resutl1 <<"," <<v.m_result2 << std::endl;
}