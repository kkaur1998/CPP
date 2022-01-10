#include<iostream>
using namespace std;
int main(){
    int arr[3];
    for(int i=0; i<3;i++){
        cout<<"enter value of the index: "<<i<<endl;
        cin>>arr[i];
    }
    cout<<arr[5];
    return 0;
}