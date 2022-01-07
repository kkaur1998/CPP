#include<iostream>
int main(){
    static int x;      //not garbage 0 will be output -we use it in oops mainly
    std::cout<<x;
    return 0;
}




/* 
Specification of static variables in c++
->static local variables are created once and stay for lifetime of program
->static data member of a class are shared by all objects (so using static data member u can know, 
    how many objects have been created), every object has a copy of data member for its own but static
    data member is shared commonly by all.
->static methods of a class can access only static data
->static global variables have internal linkage
*/