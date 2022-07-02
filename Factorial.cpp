#include <iostream>
using namespace std;

class Factorial{
    public:
    long calcFact(int num){
        long fact= 1;
        int i;
        for(i= num; i>=1; i--){
            fact = fact*i;
        }
        return fact;
    }
};
int main(){
    Factorial obj;
    int num;
    cout<<"\n\n------------------------------------------------------------------------\n\n\n\n\n";
    cout<<"enter the number: \t"<<endl;
    cin>>num;
    long fact = obj.calcFact(num);
    cout<<"\n Factorial of "<<num<<"\t"<<fact;
    cout<<"\n\n\n\n\n----------------------------------------------------------------------\n\n";
    return 0;
}