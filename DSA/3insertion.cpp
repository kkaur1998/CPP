#include <iostream>
using namespace std;
int main(){
    int n=5,position, element;
    int arr[n]={12,35,34,3,9};
    cout<<"enter the position on which u want to insert element\n";
    cin>>position;
    cout<<"enter the element";
    cin>>element;
    n++;
    for (int i=n; i>=position-1; i--){
        arr[i]=arr[i-1];
    }
    arr[position-1]=element;
    for (int i; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}
