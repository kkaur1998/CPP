#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[n];
    int s;
    cout<<"\n\n\n\nenter no. of elements";
    cin>>n;
    cout<<"enter the elements";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\n\n\n\n  no. have been stored to array\n";
    cout<<"-------------------------------------\n";
    cout<<"enter the number you want to search";
    cin>>s;
    for (int i=0; i<n; i++){
        if(arr[i]==s){
            cout<<s<<"is stored at:  "<<i<<"th index.";
            break;
        }
        else{
            continue;
        }
    }

    return 0;

}