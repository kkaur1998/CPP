#include<iostream>
using namespace std;
class Except{
    public:
    int denom;
    int num;
    Except(int var, int denom){
        if(denom==0){
            throw denom;
            denom=this->denom;
            num=this->num;
        }
        cout<<"we have used constructor"<<endl;
    }
};
int main(){
    int num,den;
    cout<<"enter value of numerator: "<<endl;
    cin>>num;
    cout<<"enter value of denominator:" <<endl;
    cin>>den;
    try{
        Except e(num,den);
        cout<<"we ar in try block"<<endl;
        cout<<e.denom;
    }

    catch(...){
        cout<<"you can not divide number with zero"<<endl;
    }
}