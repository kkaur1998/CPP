//create 2d array
//accept element from user
//1. display 2. search  3. add element 4. update element

#include<iostream>
using namespace std;
int main(){
    int k,l;
    int arr[10][10];
    int choice,rows,cols,i,j,element,sum;
    cout<<"enter no. of rows\n";
    cin>>rows;
    cout<<"enter no. of columns\n";
    cin>>cols;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<"enter arr["<<i<<"]["<<j<<"]";
            cin>>arr[i][j];
        }
    }

    //displaying options
    while(1){
        cout<<"\n";
        cout<<"1 to display the elements\n";
        cout<<"2 Search an element\n";
        cout<<"3 add all element of array\n";
        cout<<"4 to update the element\n";
        cout<<"5 to exit\n";
        cin>>choice;
        if(choice==1){
            for(int i=0; i<rows; i++){
                cout<<"\n";
                for(int j=0; j<cols; j++){
                    cout<<arr[i][j]<<"\t";
                }
            }
        }
        else if(choice==2){
            cout<<"enter the element you want to search\n";
            cin>>element;
            for(int i=0; i<rows; i++){
                for(int j=0; j<cols; j++){
                    if(element==arr[i][j]){
                        cout<<"element  "<<element<<"   is present at arr["<<i<<"]["<<j<<"]\n";
                    }
                }
            }          
        }
        else if(choice==3){
            for(int i=0; i<rows; i++){
                for(int j=0; j<cols; j++){
                    sum+=arr[i][j];
                }
            } 
            cout<<"sum of all the elements of array is"<<sum;
        }
        else if(choice==4){
            cout<<"\n enter the index element you want to update";
            cin>>k>>l;
            cout<<"\nenter the element you want to enter at arr["<<k<<"]["<<l<<"]\n";
            cin>>element;
            arr[k][l]=element;
            cout<<"sum of all the elements of array is"<<sum;
            cout<<"item is updated\n";
        }
        else{
            break;
        }
    }
    return 0;
}