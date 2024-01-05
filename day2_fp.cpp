#include <iostream>
typedef int(*PFIntegeroperations)(int, int);
using namespace std;
int add(int a, int b){
    return a + b;
}
int multiply(int a, int b){
    return a* b;
}

int main(void){

    int  a = 5, b = 6;
    //int(*fp)(int, int); 
    PFIntegeroperations fp;
    fp = add;
    cout<< "add " << fp(a,b)<<'\n';
    cout << "multiply "<<multiply(a,b)<<'\n';

}