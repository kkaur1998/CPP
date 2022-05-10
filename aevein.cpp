// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     int arr1[4]={3,4,56,2};
//     int lowest=arr1[0];
//     int highest=arr1[0];
//     for (int i=0; i<4; i++){
//         if(arr1[i]<lowest){
//             lowest=arr1[i];
//         }
//     }
//     cout<<lowest<<"this is lowest";
//     for (int i=0; i<4; i++){
//         if(arr1[i]>highest){
//             highest=arr1[i];
//         }
//     }
//     cout<<highest<<"this is highest";
// }


#include<iostream>
using namespace std;
int main(){
    int sum;
    int num1,num2;
    int arr[5]={1,5,7,-1,5};
    cout<<"enter the sum\n";
    cin>>sum;
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(arr[i]+arr[j]==sum){
                num1=arr[i];
                num2=arr[j];
                cout<<"("<<num1<<","<<num2<<")"<<"\n";
            }
        }
    }
}