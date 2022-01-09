#include<iostream>
int main(){
    std::cout<<"lets go for stream ";
    return 0;
}

/*
input device - > Buffer -> Process(Program Execution) -> buffer -> output device
buffer - IO devices are slow, so buffer are required

-----------------------------------------------
how it works in CPP program

stream in CPP-stream in an abstraction

     sequence of                                                                        sequence of
I/P-------------->STREAM-------------->PROCESS(PROGRAM EXECUTION)------------>STREAM------------------>O/P
    bytes from        istream                                               ostream                   bytes to 
     keyboard         ifstream                                             ofstream              a monitor file
    or file etc



cin- object of istream
cout- object of ostream   (to )
cerr,clog- object of ostream class(used for error and log streams)
istream- input stream     (class)
ifstream- input stream from file   (class)
ostream- output stream   (class)
ofstream- output stream from a file  (class)
*/