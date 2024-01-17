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
    
    static T m_variable;
    private:
     T* m_data;
};

template<typename T, int Size> 
T Container<T, Size>::m_variable;

int main(){
    Container<int, 10>c;
    Container<int,5>::m_variable = 7;
    return 0;
}