#include <iostream>
using namespace std;
template<typename T1, typename T2>
auto add(const T1& a,const T2& b) -> decltype(a*b){
    return a  + b;
}

int main(){
    cout << add(1.1, 2) <<'\n';
}