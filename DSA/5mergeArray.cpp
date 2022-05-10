#include <iostream>
using namespace std;
int main(){
    
    int m,n;
    cout<<"enter the length of first array\n";
    cin>>m;
    cout<<"enter the length of 2nd array\n";
    cin>>n;
    //declaring arrays
    int arr1[m],arr2[n],mergedArr[m+n];
    //taking input for the first array
    cout<<"-------------------------------------------------\n";
    cout<<"enter elements of first array\n";
    for (int i=0; i<m; i++){
        cin>>arr1[i];
    }
    cout<<"elements are inserted in first array\n\n";
    //taking input for the 2nd array
    cout<<"-----------------------------------------------\n";
    cout<<"enter elements of 2nd array\n";
    for (int i=0; i<n; i++){
        cin>>arr2[i];
    }
    cout<<"elements are inserted in second array\n\n";
    cout<<"-----------------------------------------------\n";
    for(int i=0; i<m+n;i++){
        if(i<m){
            mergedArr[i]=arr1[i];
        }
        else{
            mergedArr[i]=arr2[i-m];
        }
    }
    cout<<"merged array is:\t";
    for (int i=0; i<m+n; i++){
        cout<<mergedArr[i]<<"\t";
    }
    return 0;
}