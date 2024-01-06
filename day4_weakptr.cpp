
//it is a kind of smart pointer but doesn't increase the reference count
// non owening pointer 

#include<iostream>
#include<memory>
using namespace std;
class UDT{

    public:
        UDT(){
            cout <<"constructor" << '\n';
        }
        ~UDT(){
            cout <<"destructor" << '\n';
        }
};
int main(void){
    std::shared_ptr<UDT> udt = std::make_shared<UDT>();
    {
        std::weak_ptr<UDT> test = udt;
        cout << test.use_count() << std::endl; //the use count will be 1
    }    
}
