#include <iostream>
#include <vector>
using namespace std;

class BigArray{
    vector<int> v; //huge array
    //mutable int accessCounter;
    int accessCounter;
    int *v2;

    public:
     int getItem(int index)const{
         const_cast<BigArray*>(this)->accessCounter++;
         return v[index];
     }
     void setV2Item(int index, int x)const{
          *(v2+index) = x;
     }
};


int main(void){
    BigArray b;
}