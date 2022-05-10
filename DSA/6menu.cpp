

#include<iostream>
using namespace std;
int main(){
    char choice;

    //displaying options
    while(1){
        cout<<"\n";
        cout<<"1 to display menu1\n";
        cout<<"2 to display menu2\n";
        cout<<"Y if you want to continue\n";
        cout<<"N to exit\n";
        cin>>choice;
        //to display the elements
        if(char(choice)=='1'){
            cout<<"menu1";
        }
        //
        else if(char(choice)=='2'){
            cout<<"menu2\n";     
        }
        //choice 'Y'
        else if(choice=='Y' || choice=='y'){
            cout<<"menu3\n";
            continue;
        }
        //choice 'n'
        else if(choice=='N' || choice=='n'){
            cout<<"thanks for choosing this window\n";
            break;
        }
        //enter correct choice
        else{
            cout<<"enter correct choice";
            break;
        }
    }
    return 0;
}