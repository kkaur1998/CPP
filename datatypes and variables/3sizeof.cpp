#include<iostream>
int main(){
    std::cout<<"size of int: \t"<<sizeof(int)<<"bytes"<<"\n";
    std::cout<<"size of char: \t"<<sizeof(char)<<"bytes"<<"\n";
    std::cout<<"size of long: \t"<<sizeof(long)<<"bytes"<<"\n";
    std::cout<<"size of double: \t"<<sizeof(double)<<"bytes"<<"\n";
    std::cout<<"size of long long: \t"<<sizeof(10ll)<<"bytes"<<"\n";
    std::cout<<"size of float: \t"<<sizeof(float)<<"bytes"<<"\n";
    std::cout<<"size of 10.5: \t"<<sizeof(10.5)<<"bytes"<<"\n";
    int x=10;
    std::cout<<sizeof(x++);    //it still return the size of int not 11
    return 0;
}


/*
note: actually sizeof output mostly depends on system as well like different for different processors
sizeof operatore specification...\
->  An operator in c++ is evaluated at compile time
-> return number of bytes required for a datatype
-> can be used with a variable and literal to0

note: in java and python arrays are objects and these datatypes are objects so they are not close to system
*/