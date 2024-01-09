#include <iostream>
#include<ostream>
using namespace std;

class Vector3f{
    
    public:
        float x,y,z;
        Vector3f(){
            x = 0.0f;
            y = 0.0f;
            z = 0.0f;
        }

        Vector3f operator+(const Vector3f& rhs){
            Vector3f result;
            result.x = x + rhs.x ;
            result.y = y + rhs.y ;
            result.z = z + rhs.z ;
            return result;
        }
        
       friend ostream& operator<< (ostream& os, const Vector3f& obj) {
            os << obj.x << "," << obj.y << "," << obj.z <<std::endl;
            return os;
        }
        bool operator==(const Vector3f&rhs)const{
            return x==rhs.x && y ==rhs.y && z==rhs.z;
        }

};

int main(void){
    Vector3f myVec1;
        myVec1.x = 1.0;
        myVec1.y = 1.0;
        myVec1.z = 1.0;

    Vector3f myVec2;
        myVec2.x = 1.0;
        myVec2.y = 1.0;
        myVec2.z = 1.0;
    
    Vector3f result = myVec1 + myVec2;

    //cout << result.x << "," << result.y << "," << result.z << '\n';
    cout << result;
    if(myVec1 == myVec2){
            cout <<"Vectors are equal" <<std::endl;
    }

}