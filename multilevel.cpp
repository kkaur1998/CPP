#include <iostream>
using namespace std;
class Vehicle {
  public:
    Vehicle() {
      cout << "This is Vehicle Class" << endl;
    }
};
class FourWheeler {
  public:
    FourWheeler() {
      cout << "Fourwheeler Class." << endl;
    }
};
 
class TwoWheeler {
  public:
    TwoWheeler() {
      cout << "Twowheeler Class." << endl;
    }
};

class Car: public FourWheeler, public Vehicle {
    public:
    Car(){
        cout<<"Car comes under Fourwheeler Category"<<endl;
    }
};

int main(){
    int num;
    cout<<"\n\n------------------------------------------------------------------------\n\n";
    cout<<"\n\nMultilevel Inheritence Example\n\n";
    cout<<"\n\n------------------------------------------------------------------------\n\n";
    Car c1;
    cout<<"\n\n----------------------------------------------------------------------\n\n\n\n\n";
    return 0;
}