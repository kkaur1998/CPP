//function Template

#include<iostream>
using namespace std;

template<typename T>
T myMax(T x, T y){
    return(x>y)?x:y;
}

template<typename T>
T myMax(T a){
    return a*a;
}
int main(){
    cout<<"\n\n\n\n\n--------------------------------------------------------------\n\n";
    cout<<myMax<int>(3,7)<<endl;
    cout<<myMax<char>('c','g')<<endl;
    cout<<myMax<int>(3)<<endl;
    cout<<"\n\n--------------------------------------------------------------\n\n\n\n";
}



/*
Template- write once use many times
----------------------------------------------------------------------
in template - we provide sample code, compiler generates that code as per datatype (as per user's need)
- so template prevent you from writing datatype specific code.
-----------------------------------------------------------------------
types of templates
1. Function Template  - like sort, linear search, binary search
2. Class Template     - stack, queue, deque
-----------------------------------------------------------------------
means you just pass datatype in template rest whole work is done by compiler
-> betteer than macro as type checking is done before
-> the main concept behind STL (Standard Template Library)
*/