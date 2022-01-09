#include<iostream>
using namespace std;
template <typename T>
T arrMax(T arr[], int n){
    T res=arr[0];
    for (int i=1; i<n ; i++){
        if(arr[i]>res){
            res=arr[i];
        }
    }
    return res;
}

int main(){
    int arr[]={10,40,3};
    cout<<arrMax<int>(arr,3)<<endl;
    float arr1[]={10.4,4.4,3.2};
    cout<<arrMax<float>(arr1,3);
    return 0;
}



/*
#include<iostream>
using namespace std;
template <typename T, int limit>
T arrMax(T arr[], int n){
    if(n>limit){
        throw:: error;
    };
    T res=arr[0];
    for (int i=1; i<n ; i++){
        if(arr[i]>res){
            res=arr[i];
        }
    }
    return res;
}

int main(){
    const int x = 100; //setting limit of size of array to 100
    int arr[]={10,40,3};
    cout<<arrMax<int,x>(arr,3)<<endl;
    float arr1[]={10.4,4.4,3.2};
    cout<<arrMax<float,x>(arr1,3);
    return 0;
}
*/
