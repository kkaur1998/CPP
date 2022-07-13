#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<time.h>
#include<vector>
using namespace std;

int main()
{
    cout<<"\n\n-------------------------------------------------------------------\n\n\n";
    string line;
    int random = 0;
    int numOfLines = 0;
    ifstream File("A_file.txt");

        srand(time(0));
        random = rand() % 50;

    while(getline(File, line))
    {
        ++numOfLines;

        if(numOfLines == random)
        {
            cout << line;
        }

    }
}