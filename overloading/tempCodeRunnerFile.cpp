/ C++ Program to find the area
// of triangle
#include <iostream>
#include<math.h>
using namespace std;

class Triangle{
    public:
    int a,b,c,s;
    Triangle(){
        cout<<"print"<<endl;
    }
    int findArea(){
        int s = (a + b + c) / 2;
        return sqrt(s * (s - a) *
                        (s - b) * (s - c));
    }
}

 
// Driver Code
int main()
{
    Triangle t;
    t.a=5;
    t.b=6;
    t.c=7;
    cout << "Area is " << t.findArea();
    return 0;
}
 
