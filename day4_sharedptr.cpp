
#include <iostream>
#include<memory>
using namespace std;

class UDT{
public:
    UDT(){
        cout<<"Constructor"<<'\n';
    }
    ~UDT(){
        cout<<"Desctructor"<<'\n';
    }
};

int main(void){
    std::shared_ptr<UDT> test = std::make_shared<UDT>();
    std::shared_ptr<UDT> rest = test;
    {
        //reference count is thread safe
        std::cout <<rest.use_count()<<'\n';
    }
        
}
