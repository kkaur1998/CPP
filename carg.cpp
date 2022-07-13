// Name of program mainreturn.cpp
#include <iostream>
using namespace std;
  
int main(int argc, char** argv)
{
    cout<<"\n\n----------------------------------------------------------------\n\n\n";
    cout << "You have entered " << argc
         << " arguments:" << "\n";
  
    for (int i = 0; i < argc; ++i)
        cout << argv[i] << "\n";
  
    cout<<"\n\n----------------------------------------------------------------\n\n\n";
    return 0;
}