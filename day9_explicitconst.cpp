#include <iostream>
using namespace std;

class udt{

public:
    explicit udt(int x){
        abc = x;
     }
private:
    int abc;

};

int main(void){
      udt u{1.2};
}