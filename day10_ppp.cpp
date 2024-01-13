#include <iostream>

using namespace std;

class Base{
    public:
    Base(){
        std::cout << "Base constructor"<<std::endl;
    }
    ~Base(){
        std::cout <<"Base destructor"<<std::endl;
    }
    public:
    int m_base_public;
    private:
    int m_base_private;
    protected:
    int m_base_protected;

};

class Derived: public Base{
    public:
    Derived(){
        std::cout << "Derived Constructor"<<std::endl;
        m_base_protected = 10;
        m_base_public = 20;
    }
    ~Derived(){
        std::cout <<"Derived Destructor"<<std::endl;
    }
};
int main(void){
    Derived d;
    std::cout << d.m_base_public <<std::endl;

}