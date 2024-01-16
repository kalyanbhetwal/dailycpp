#include <iostream>
using namespace std;

struct game{
    bool c;
    float s;
    short np;
};

struct game2{
    bool c;
    short np;
    float s;
};

//memory alignment
// padding 
int main(void){
    cout <<"size of game "<< sizeof(game) <<'\n';
    cout <<"size of game "<< sizeof(game2) <<'\n';
}