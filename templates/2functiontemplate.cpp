#include<iostream>
using namespace std;
template <typename T>
void print_data(T out){
    cout<<out<<endl;
}

template <typename T1, typename T2>
void add_data(T1 a, T2 b){
    return (a+b);
}


int main(){
    double d= 5.5;
    string s = "hello world";
    print_data(d);
    print_data(s);
    cout<<add_data(2,3);
    cout<<add_data(5.2,2.3);
    return 0;
}

