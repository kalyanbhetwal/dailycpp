#include <iostream>
using namespace std;

template<typename T>
T Sum(T arg){
    return arg;
}

template <typename T, typename... Args>
T Sum(T start, Args... args){
    return start + Sum(args...);
    
}
int main(){
    cout << Sum(1,2,3,4,5) << endl;
}