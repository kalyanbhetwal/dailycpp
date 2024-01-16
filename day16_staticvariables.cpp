#include <iostream>
using namespace std;

struct API{
    API(){}
    ~API(){}

    static int MAJOR;
    static int MINOR;
    static int GetMajorVersion(){
        return MAJOR;
    }
};

int API::MAJOR = 7;

int main(){
    cout <<"Major:" << API::GetMajorVersion() <<'\n';
    return 0;
}
