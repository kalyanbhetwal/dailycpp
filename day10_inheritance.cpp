
#include <iostream>
using namespace std;
class Dog{
    public:
    Dog(){

    }
    void Bark(){
        std::cout << "bark!"<<std::endl;
    }
    void Walk(){
        x+=1;
        y+=1;
        z+=1;
    }
    float x,y,z;


};
class Gloden : public Dog{

};

int main(void){
    Gloden dog1;
    dog1.Bark();
    dog1.Walk();
}