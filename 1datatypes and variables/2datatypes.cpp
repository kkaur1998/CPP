#include<iostream>
int main(){
    int a= 9;
    short b=3;
    char c= 'a';
    long d=235345;
    float e= 2345.45;
    std::cout<<"a:\t"<<a<<"\nb:\t"<<b<<"\nc:\t"<<c<<"\nd:\t"<<d<<"\ne:\t"<<e;
    return 0;
}

/* Datatype is used to tell the type of value you are going to save in variables
----------------------------------------------------------------
| char                    |       8       |      -128 to 127      |
| unsigned char           |       8       |       0   to 255      |
| short                   |       16      |    -32768 to 32767    |
| int                     |       32      |    -2.14x10^9 to ..   |
| unsigned int            |       32      |                       |
| long long               |       64      |                       |
| unsigned long long      |       64      |                       |
| float                   |       32      |                       |
| double                  |       64      |                       |
| bool                    |       8       |                       |
|-----------------------------------------------------------------
 
 
 
 Datatypes types------

 1. primitive datatypes- pre defined 
            ->integer type :  short, int, long, long long, unsigned int, unsigned long long
            ->character type: char, unsigned char, char16_t,char32_t, wchar_t, char8_t
            ->Floating type: float,double,long double
            ->other: bool,void
 2. non primitive datatypes:
            -> Derived : Array, Pointer, string, vector
            -> User defined: class, struct
 
 */