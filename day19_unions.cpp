#include <iostream>

using namespace std;
/*
unions differes from struct
in that it only hold the largest type
*/

union U{
    int i;
    short s;
    float f;

    void printi(){
        cout << i << endl;
    }
};

int main(){
    U myU;
    myU.i = 50;
    cout << myU.i <<endl;
    myU.printi();
}