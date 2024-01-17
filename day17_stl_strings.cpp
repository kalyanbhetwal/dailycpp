#include<iostream>
#include <string>
using namespace std;

//Keep in mind, passing strings by
//const reference if they are not changing;

void PrintString(const std::string&s){
    std::cout << s << std::endl;
}
int main(){
    std:string s("hello");
    cout << s << endl;
    cout << s.capacity() <<endl;
    s.shrink_to_fit() ;
    cout << s.capacity() << endl;
    PrintString(s);
    
}
 
