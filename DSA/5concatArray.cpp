#include<iostream>
using namespace std;
int main(){
    int m,n,temp;
    cout<<"enter length of first array\n";
    cin>>m;
    cout<<"enter length of 2nd array\n";
    cin>>n;
    int arr1[m],arr2[n];
    cout<<"-------------------------------\n";
    cout<<"enter elements of first array\n";
    for(int i=0; i<m; i++){
        cin>>arr1[i];
    }
    cout<<"elements are inserted in first array\n";
    cout<<"-------------------------------\n";
    cout<<"enter elements of second array\n";
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    cout<<"elements are inserted in second array\n";
    temp=m;
    m=m+n;
    for(int j=temp; j<m; j++){
        cout<<m-temp<<"\t";
        arr1[j]=arr2[j-temp];
    }
    cout<<"\n";
    for(int j=0; j<m; j++){
        cout<<arr1[j]<<"\t";
    }
    return 0;
}