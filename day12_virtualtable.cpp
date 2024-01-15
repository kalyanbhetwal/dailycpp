#include <iostream>
using namespace std;

class Base{
    public:
        Base(){
            base_data = new int[10];
            cout <<"Base Constructor" <<std::endl;
        }
       virtual ~Base(){
            delete[]base_data;
            cout <<"Base Destructor" <<std::endl;
        }
      virtual void MemberFunc(){
            cout << "Base Memberfunc()"<<std::endl;
        }
        int * base_data;
};

class Derived: public Base{
    public:
     Derived(){
        derive_data = new int[10];
        cout <<"Derived Constructor" <<std::endl;
     }
     ~Derived(){
        cout<<"Derived Destructor" <<std::endl;
        delete[]derive_data;
     }
    void MemberFunc() override{
        cout <<"Derived Memberfunc()"<<std::endl;
     }
     int * derive_data;
};

int main(void){
    //create a base pointer that can point to base or derived
    // we will also have a vtbl that is created for this instance of the object
    Base* d = new Derived;
    //when we call a member function vtable points us the correct member function
    d->MemberFunc();
   delete d;
   //Derived d;
}