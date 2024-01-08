#include <iostream>
using namespace std;

class Student{
    public:
     Student(){
        cout <<"constructor "<<'\n';
     }
     ~Student(){
        cout <<"destructor "<<'\n';
     }
     void printName(){
        cout <<"name "<< m_name <<'\n';
     }
          std::string m_name;
};
 
int main(void){
     Student*n1 = new Student();
     n1->m_name = "test";
     n1->printName();
     delete n1;
}