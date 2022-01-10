#include<iostream>
using namespace std;

template <typename T>
class Pair{
    public:
    T x,y;
    Pair (T i, T j){x=i;y=j;}    //constructor
    T getFirst();
    T getSecond();
};

template <typename T>
Pair<T>::getFirst(){return x;}
Pair<T>::getSecond(){return y;}


int main(){
    Pair <int> p1(10,20),p2(30,40);
    cout<<p1.getFirst()<<"     "<<p1.getFirst()<<endl;
    cout<<p2.getFirst()<<"     "<<p2.getSecond()<<endl;
}