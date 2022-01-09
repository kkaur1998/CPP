#include<iostream>
using namespace std;

template <typename T>
struct Pair{
    T x,y;
    Pair (T i, T j){x=i;y=j;}    //constructor
    T getFirst(){return x;}
    T getSecond(){return y;}
};

int main(){
    Pair <int> p1(10,20),p2(30,40);
    cout<<p1.getFirst()<<"     "<<p1.getSecond()<<endl;
    cout<<p2.getFirst()<<"     "<<p2.getSecond()<<endl;
}