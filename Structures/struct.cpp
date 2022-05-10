/*
Structure is a collection of variables of different data types under a single name. It is similar to a class in that, both holds a collecion of data of different data types.
When a structure is created, no memory is allocated.

The structure definition is only the blueprint for the creating of variables. 
*/
#include<iostream>
using namespace std;
struct Person
{
    char name[50];
    int age;
    float salary;
};

int main(){
    Person p1;

    cout<<"Enter name of person\n";
    cin>>p1.name;
    cout<<"enter age of person\n";
    cin>>p1.age;
    cout<<"enter salary of person\n";
    cin>>p1.salary;
    cout<<"--------------------------------------------------------------------";
    cout<<"BELOW ARE THE DETAILS ENTERED BY YOU\n";
    cout<<p1.name<<endl;
    cout<<p1.age<<endl;
    cout<<p1.salary<<endl;
    return 0;

}