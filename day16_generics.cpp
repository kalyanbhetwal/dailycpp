#include <iostream>
using namespace std;

//Templates or "Generics"
//avoid copy and paste
//serve as a blue print for compiler to generate code for us
/*https://cppinsights.io/*/
template <typename T>
T square(T input){
    return input * input;
}
int main(){ 

    std::cout << square(2) << endl;
    std::cout << square(2.2) << endl;
    std::cout << square<double>(2.24) << endl;

}