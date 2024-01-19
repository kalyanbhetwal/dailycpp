#include <iostream>
#include <span>
#include <array>
using namespace std; 
//read only view
void PrintArray(std::span<int>param){
    cout << param.extent<<endl;
    for(const int&a : param){
        cout << a <<std::endl;
    }
}

int main(){
    std::array<int,4> arr = {1,2,4,5};
    std::span mySpan{arr};
    PrintArray(arr);
    return 0;
}