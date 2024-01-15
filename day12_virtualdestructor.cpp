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
    Base* d = new Derived;
    d->MemberFunc();
   delete d;
   //Derived d;
}