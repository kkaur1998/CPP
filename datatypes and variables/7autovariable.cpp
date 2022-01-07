#include<iostream>
int main(){
    auto a=10;
    auto b='b';
    auto c=12.5;
    std::cout<<"a:"<<a<<"\nb:"<<b<<"\nc: "<<c<<"\n";
    std::cout<<typeid(a).name()<<"\n";
    std::cout<<typeid(b).name()<<"\n";
    std::cout<<typeid(c).name()<<"\n";
    return 0;
}

/*
compiler will automatically infer data type for a , b, c
typeid(a).name() is used to get data type of the variables
i - int
c - char
d - double
---------------------------------------------------
advantages of auto keyword

-> no conversion happens when auto is used
        float x=3.4;   //double literal converted to float
        auto y=3.4;         //type of y is double

-> if a funciton returns auto , its return type can be changed  without worrying about prototype change\
-> can be very helpful for lengthy type , especially STL iterators.
            vector <int> :: iterator i
            ---can be replaced with---
            auto i
-> lambda expressions

*/