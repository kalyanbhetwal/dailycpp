#include <iostream>
using namespace std;

template <typename T1, typename T2>
void add(T1 i1, T2 i2){
    cout << i1 + i2<<endl;
}
int main(){
    add(1,3);
    add<float,float>(1.1,3);

} 