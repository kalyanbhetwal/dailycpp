#include <iostream>
#include <memory>
using namespace std;

class UDT{
    public:
        UDT(){
            std::cout <<"this is a constructor"<<std::endl;
        }
        ~UDT(){
            std::cout <<"this is a destructor"<<std::endl;
        }
};
int main(void){
    //create a unique pointer
    std::unique_ptr<UDT> udt = std::unique_ptr<UDT>(new UDT);
    std::unique_ptr<UDT[]> udt1 = std::unique_ptr<UDT[]>(new UDT[100]);

    //equivalent make unique
    std::unique_ptr<UDT> test = std::make_unique<UDT> (new UDT);
    // we cannot make copies.   
    // we don't need to delete it.

}