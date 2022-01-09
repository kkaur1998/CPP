#include<iostream>
using namespace std;
int main(){
    int roll;
    string name;
    string welcome_msg;
       cout<<10*50;
    cout<<"enter the roll no. of student:"<<endl;
    cin>>roll;
    cout<<"enter the name of student"<<endl;
    cin>>name;
    cout<<"enter the welcome message for :"<<name<<endl;
    /*
    When cin.getline() reads from the input, there is a newline character left
     in the input stream, so it doesn't read your c-string. Use cin.ignore() before calling getline().
    */
    cin.ignore();                       
    getline(cin,welcome_msg); 
    cout<<"name of student:"<<roll<<endl;
    cout<<welcome_msg<<endl;

    return 0;
}


//endl vs "\n"
//endl flushes the output stream (buffer) -> then new item is rendered in buffer
//"\n" -> faster than endl as it does not flush buffers
//cout is object of ostream class to display output using insertion operator - <<
// cin uses >> (extraction operator ) to put data


//cin won't work if code runner terminal is not enabled
//so go to setting> search code runner> code runner: run in terminal (check the box)


/*
Buffering

suppose below code
int a,b;
cout<<"enter value of a";
cin>>a;
cout<<"enter value of b";
cin>>b;
if we give two inputs to cin like 10 20
then they both will store in buffer
for two 2nd cin , it won't take value from user as 2nd value is already stored in buffer as 20, b=20
this is buffering
*/