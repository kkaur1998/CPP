#include<iostream>
using namespace std;
int main(){
    int a=20;
    int b=0x1A;
    int c=016;
    int d=0b11;
    int e=124u;
    int f=124LL;
    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<c<<"\n";
    cout<<d<<"\n";
    const char *s1="kamaljeet";
    string s2="kamal";
    cout<<s1<<"\t"<<s2;
    return 0;
}


/*
0x1A= 10*16^0+1*16^1=10+16=26
016=6*8^0+1*8^1=14
0b11=1*2^0+1*2^1=1+2=3

using suffix in integer literals

u -unsigned   - 124u
l - long        - 124L
ll - long long   -124LL

floating point literals

float a= 10.5f;
double b= 10.514f  //double
float d= 21.1e15f   //21*10^15
double e= 200.1e-80 //200*10^-80
*/