#include <iostream>
#include <string>
using namespace std;

void PrintString(std:: string_view param){
    cout << param << endl;
}

int main(){
    const char *s = "this is some really long string...";
    PrintString(s);
    string str = "mike";
    string_view sview = s;
    cout <<"string     :"<<sizeof(str) <<std::endl;
    cout <<"string view:"<<sizeof(sview) <<std::endl;
}