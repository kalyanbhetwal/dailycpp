#include <iostream>

using namespace std;
class frclass{
    friend UDT;
    private:
     int prv;
}

class UDT{
    public:
    UDT(): my_prv_variable(2){
        fr.prv = 1;
        cout<<"Const" <<std::endl;
    }
    ~UDT(){
        cout<<"Dest" <<std::endl;
    }
    friend void ppvmemofUDT(UDT us);
    private:
    int my_prv_variable;
    frclass fr;
};
void ppvmemofUDT(UDT us){
        cout<<"test " << us.my_prv_variable <<std::endl;
}
int main(void){
    UDT dt;
    ppvmemofUDT(dt);
}