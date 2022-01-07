#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    auto temp=a;
    a=b;
    b=temp;
    cout<<"a:"<<a<<"b:"<<b;

}