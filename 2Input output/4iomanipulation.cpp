#include<iostream>
using namespace std;
#include<iomanip>      //to use setw,setfill etc 
int main(){
    bool c=true;
    int a=26,b=20;
    cout<<c<<endl;
    cout<<std::boolalpha;        //boolalpha to manipulate boolean values
    cout<<c<<endl;
    cout<<std::noboolalpha;
    cout<<c<<endl;
    /////////////////////////integer manipulation
    cout<<a<<" "<<b<<" "<<endl;  //26,20
    cout<<std::hex;
    cout<<"using hex flag"<<a<<" "<<b<<"\n";   //19,14
    cout<<std::oct;
    cout<<"using oct flag"<<a<<" "<<b<<"\n";    //32,64
    cout<<std::dec;
    cout<<"using decimal flag"<<a<<" "<<b<<"\n";    //26,20

    //////////////////////////////different other flags in c++

    cout<<std::showbase;    //decimal does not show a base, for octa, its 8 , for hex: 16;
    cout<<"after showbase"<<a<<b<<endl;
    cout<<std::noshowbase; 
    cout<<"after noshowbase"<<a<<b<<endl;
    cout<<std::showpos;
    cout<<"after showpos"<<a<<b<<endl;
    cout<<std::noshowpos;      //sign positive or negitive
    cout<<"after noshowpos"<<a<<b<<endl;
    cout<<std::uppercase;
    cout<<"after using uppercase flag"<<a<<b<<endl;

    ///////////////////////////////////////////formatting manipulation of output
    //  setw(n)- n=width, setfill(c)- , std::left - left align, std::right- right align

    int d=6;
    cout<<std::setw(5);
    cout<<std::setfill('*');
    cout<<d<<endl;

    cout<<std::setw(5);
    cout<<"hi"<<endl;        //***hi
    cout<<d<<endl;              
    cout<<std::left;
    cout<<std::setw(5);
    cout<<a<<"\n";
    return 0;
}

//we can modify default behaviour of printing values
//c++ has many flags to manipulate the printing of values like, boolalpha, oct,hex, dec
//setw used top give fixed width to a variable priniting
//if you don't give setfill('*'), then by default ' ' will be filled in the space