
int main(){
    const int i = 9;  
    int j = 10;  
    const int *p1 = &i; //p1 is pointer to constant integer i.e. data cannot be changed.
    // *p1 = 5; // this won't work
    int * const p2 = &j; //pointer is constant, data is not
    const int* const p3=&j; // both pointer and data are constant
    
    const_cast<int&>(i) = 9;
    int j;
    //static_cast<const int&>(j) = 7; //not possible

}