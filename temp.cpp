#include <iostream>
using namespace std;
template<typename T>
 
T mul(T a, T b){
    return a*b;
}

int main(){
    cout<<"\n-----------------------------------------\n";
    cout<<"this is output:\t";
    cout<<mul(6,5);
    cout<<"\n-----------------------------------------\n";
    return 0;
}