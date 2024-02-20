#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    std::vector<int>v{1,2,4,5};
    int mod = -1;
    auto func = [&mod](int n){
                mod = 10;
                std::cout << n <<','; 
        };
    std::for_each(begin(v),
                 end(v),
                 func );
    std::cout << mod << std::endl;
}