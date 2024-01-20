#include <iostream>
#include <variant>
using namespace std;

union U{
    int i;
    short s;
};

int main(){
    std::variant<int, float> data;
    data = 7.0f;
    if(auto attempt = get_if<float>(&data)){
        cout <<"we have found a float"<<endl;
    }
    cout << get<float>(data);
    return 0;
}