#include<iostream>

using namespace std;

class UDT{
    public:
     UDT(){

     }
     ~UDT(){

     }
     UDT(const UDT& rhs){
     }
     void setValue(int value){
        m_value = value;
     }
     void ComputeValue() const{
        //m_value = 10;
     }
     int getValue()const{
        ComputeValue();
        return m_value;
     }
     private:
        int m_value;
};

int main(void){


    //const 
    //1. read-only ("immutable") variables
    //2. read only parameters
    //3. making all of the member variables in a member function read only

    UDT u;
    u.setValue(10);
    cout<<u.getValue();


}