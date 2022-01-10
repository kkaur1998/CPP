#include<iostream>
using namespace std;
int main(){
    int var;
    int denom;
    cout<<"enter numeratoer";
    cin>>var;
    cout<<"enter denominator";
    cin>>denom;
    try{
        if(denom==0){
            throw "4446";
        }
        cout<<var/denom;
    }
    catch(...){
        cout<<"you can not divide a number with zero;"<<endl;
    }
    return 0;
}