#include<iostream>
#define AREA= PI
const double PI=3.14;

int main(){
    const int x=10;
    //x++;   //we can not modify value of const
    std::cout<<x;
    //application of const:
    int r;
    std::cout<<"enter value of radius/n";
    std::cin>>r;
    std::cout<<"area of circle is:     "<<(PI*r*r);
    return 0;
}

/*
So how can we change value of a constant
cpp is good, there is pointer which point address we can change value using address of that variable
- but it is not a good practice as constant is used for a purpose

*/