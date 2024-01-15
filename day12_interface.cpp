#include <iostream>
using namespace std;

//IRender is a interface
//can future proof code if properly implemented
class IRender{
    public:
    //this is the pure virtual function
     virtual void Draw() = 0;
     virtual void Update(){}
};

class OpenGL: public IRender{
    public:
     void Draw() override{
     cout <<"OpenGL: Draw" <<'\n';
     }

     void Update() override{
     cout <<"OpenGL: Update" <<'\n';
     }

};
class Vulkan: public IRender{
    public:
    void Draw() override{
        cout <<"Vulkan: Draw"<<'\n';
    }
     void Update() override{
     cout <<"Vulkan: Update" <<'\n';
     }


};

int main(void){
    IRender* ir = new OpenGL;
    ir->Draw();
    ir->Update();
    
    return 0;
}