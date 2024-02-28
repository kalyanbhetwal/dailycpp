
#include <iostream>

#ifndef PI
    #define PI 3.1415
#endif

#define LOG(param) std::cout << "LOG:"\
                   << #param; \
                   param;\
                   std::cout << std::endl;
                   
int add(int a,int b){
    return a+b;
}

//constexpr float PI=3.141526
//'recommended way to do it

int main(){

LOG(add(7,2););
#ifdef PI
    std::cout << PI << std::endl;
#else
    std::cout << 22.0f/7.0f <<std::endl;
#endif
}