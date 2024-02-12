#include <iostream>
#include <string>
/*
Compiler silently writes 4 functions if they are not explicitly declared:
1. Copy constructor.
2. Copy assignment Operator.
3. Destructor.
4. Default constructor.
*/

class openFile{
    public:
    openFile(std::string f){
        std::cout << "Open a file" <<std::endl;
    }
    openFile(openFile &rhs) = delete; // to turnoff the default function
};

int main(){
    openFile f("test.txt");
   // openFile f2(f);
}