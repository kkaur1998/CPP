#include<iostream>  
using namespace std;
int main(){
    int x=10;
    char y='A';
    int y=x;
    cout<<(x+y)<<"\n";
    float z=5.5;
    cout<<(x+z);    //implicit conversion4
    double add= x/3;
    cout<<add;
    double add= double(x/3); //explicit conversion
    double div= static_cast<double>(x)/3;   //will chk if conversion is possible or not// c++ style explicit conversion
    return 0;
}

/*
Type conversion in c++

-> Most of the primitive data types are allowed to convert to each other without any explicit type casting
-> some of these conversions cause data loss eg
        float x=10.5;
        int y=x;    //y=10
        bool z=y;    //z=true
-> If we have expressions of multiple types below rules are followed.... (these are implicit- by compiler)
       bool-> char-> short int-> int -> unsigned int
       -> long -> long long -> float -> double -> long double
*/

