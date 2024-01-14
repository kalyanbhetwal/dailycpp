#include <iostream>
#include <string>

using namespace std;
class ToplevelClass{
    public:
     ToplevelClass(string str){cout << "Top level class"<< endl;}
};

class EntityBase : public ToplevelClass{
    public:
        EntityBase(): ToplevelClass("arg"){
            cout << "EntityBase Constructor" << endl;
        }
        EntityBase(string s): ToplevelClass("arg"), m_name(s){
            cout <<"EntityBase (name) Constructor" <<endl;
        }
        ~EntityBase(){
            cout <<"EntityBase Destructor"<<endl;
        }
        private:
         string m_name;
};

class Monster: public EntityBase{
    public:
        Monster(): EntityBase("test"){
            cout <<"Monster Constructor"<<endl;
        }
        ~Monster(){
            cout <<"Monster Destructor"<<endl;
        }
};

int main(void){
    Monster basMon;
    return 0;  
}