#include <iostream>
#include <deque>
using namespace std;

//deque is similar to a vector, but limited in 
//insertion/removal to front and back.
int main(){
    std::deque<int>test{1,2,4,5};
    test.push_front(7);
    test.push_front(8);
    test.push_back(7);
    test.push_front(8);
    for(const auto& a: test){
        cout << a <<endl;
    }
 
}