// C++ program to overload the binary operator +
// This program adds two complex numbers

#include <iostream>
using namespace std;

class Complex {
 
   public:
    // Constructor to initialize
    Complex(){
        cout<<"\n---------------------------------------------------\n";
        cout<<"hi "<<endl;
        cout<<"constructor is invoked now as object is created"<<endl;
        cout<<"\n---------------------------------------------------\n";
    }

};

int main() {
    Complex obj;
    return 0;
}