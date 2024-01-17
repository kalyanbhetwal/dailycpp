#include <iostream>
#include <array>
#include <algorithm>

void PrintArray(std::array<int,4> a){
    std::cout << a.size() <<std::endl;
    std::cout << sizeof(a) <<std::endl;
}
int main(){

    std::array<int,4> data{1,2,4,3};
    //data.fill(0)
    std::sort(data.begin(), data.end())
    std::cout << sizeof(data) <<std::endl;
    PrintArray(data);
}