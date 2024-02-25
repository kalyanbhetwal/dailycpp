#include <iostream>

using namespace std;
void point(int x, int y, int z=0){
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;

}

using namespace std;
int main(){
    point(1,2); 
    return 0;
     
}