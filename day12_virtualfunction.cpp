#include <iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout <<"Base Constructor" <<std::endl;
        }
        ~Base(){
            cout <<"Base Destructor" <<std::endl;
        }
      virtual void MemberFunc(){
            cout << "Base Memberfunc()"<<std::endl;
        }
};

class Derived: public Base{
    public:
     Derived(){
        cout <<"Derived Constructor" <<std::endl;
     }
     ~Derived(){
        cout<<"Derived Destructor" <<std::endl;
     }
    void MemberFunc() override{
        cout <<"Derived Memberfunc()"<<std::endl;
     }
};

int main(void){
    Base* d = new Derived;
    d->MemberFunc();
    delete d;
}