#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    std::vector<int>v{1,2,4,5};
    std::for_each(begin(v), end(v),[](int n){std::cout << n <<',';} );
}