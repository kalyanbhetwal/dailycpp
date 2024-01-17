#include <iostream>
using namespace std;

template<typename t1, typename t2>
struct Entry{
    Entry(t1 a, t2 b){
        first_key = a;
        second_val = b;
    }

    t1 first_key;
    t2 second_val;
};

int main(){
    //class template argument deduction CTAD
    Entry<int,int> entry(5,1000);
    cout << entry.first_key << endl;
    cout << entry.second_val << endl;

}