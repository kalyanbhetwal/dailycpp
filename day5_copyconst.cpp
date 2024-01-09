
#include <iostream>

using namespace std;
class vector3{

    public:
    int*x;
     vector3(){
            x = new int[10];
     }
     ~vector3(){
        delete[]x;
     }
     //copy constructor
     vector3(const vector3& rhs){
        std::cout <<"copy const. was called" <<'\n';
        x = new int[10];
        for(int i=0;i<10;i++){
            x[i] = rhs.x[i];
        }
     }
     //copy assignment operator
      vector3& operator=(const vector3&rhs){
        cout <<"copy assignment" <<'\n';
        if(&rhs==this){
            return *this;
        }
       for(int i=0;i<10;i++){
        this->x[i] = rhs.x[i];
       }
       return *this;

      }

};

//C++ gives defualt compiler generated constructor, destructor and copy constructor
//copy assignment operator
//deep and shallow copy


int main(void){
    vector3 vec{1,2,36};
    vector3 v ;
    v = vec;
    std::cout << v.x << "," << vec.x <<'\n'; 

}

// C++ gives us the free copy constructor and copy assignment
// but it does a shallow copy
// we want deep copy
