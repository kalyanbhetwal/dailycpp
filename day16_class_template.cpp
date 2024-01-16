#include <iostream>
using namespace std;

template <typename T, int Size>
class Container{
    public:
     Container(){
        m_data = new T[Size];
     }
     ~Container(){
        delete[]m_data;
     }
    private:
     T* m_data;
};

int main(){
    Container<int, 10>c;
    Container<float, 12>cf;
    return 0;
}