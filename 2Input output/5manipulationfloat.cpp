#include<iomanip>
#include<iostream>
using namespace std;
int main(){
    double x=1.2300;
    cout<<x<<"\n";
    double y=1567.56732;
    cout<<y<<"\n";
    double z=1244567.3435;
    cout<<z<<"\n";
    double w=12345.3425;
    cout<<w<<"\n";
    double u= 123e+2;
    cout<<u<<"\n";


    //---------------------------------------lets manipulate default float formatting----------------------

    cout<<std::setprecision(4);
    double j= 15.6754657;
    cout<<j<<endl;
    double g=1.23;
    cout<<std::showpoint<<g<<endl;
    cout<<std::showpos<<g<<endl;
    cout<<std::uppercase<<g<<endl;

    //-------------------------Floating Point (fixed and scientific)-------------------------------
        
    double m=1.23,n=1123456.253;
    cout<<std::fixed;
    cout<<m<<endl;
    cout<<n<<"\n";
    cout<<scientific<<std::setprecision(2);
    cout<<m<<endl<<n<<endl;
    double k=1.23+8;
    cout<<k;
    return 0;
}


/*
------------Floating Point by default formatting -----------------
-> no precision zone
-> no trailing zeros eg: 10.700 is written as 10.7
-> Precision means total digits after e;
-> default precision value is 6;
-> when value before decimal  point does not fit in 6 digits, power format is used 

        eg   1234568.3 will be printed as 1.23456e+06   //as not more than 6 so 8 will be discarded

---------------------------FLOAT manipulation functions-------------------------------------
///////////////////////////////////////////////////////////////////////////////////////////4

-> setpricision(n): changes the default precision
-> showpoint: shows trailing zeros
-> showpas: show +sign for positive values. 
-> noshowpas: revert of showpas
-> uppercase: print 'e' as 'E'
-> nouppercase: revert uppercase


//-------------------------Floating Point (fixed and scientific)-------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////
|--------------------------------------------------------------------|
|Fixed                       |                     Scientific        |
|--------------------------------------------------------------------|
|No power or e               |                     uses 'e'          |
|use '.' (decimal)           |                     1.02e+04          |
|10.5,1001.5                 |                     1.45e+06          |
---------------------------------------------------------------------|
-> in both, precision means digits after decimal point
-> if there are not enough digits, then trailing zeros are shown in both
-> we can set to default using 'defaultfloat'
*/