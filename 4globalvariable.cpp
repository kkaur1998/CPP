#include<iostream>
extern  int b;          //extern is used so that we can access value even if it is initialized after main
int global_variable;        //global variables
int common_variable=20;
int main(){
    int local_variable;
    int common_variable=30;
    std::cout<<"local variable value:\t"<<local_variable<<"\t";
    std::cout<<"global variable value:\t"<<global_variable<<"\t"; 
    //due to top down flow of program, b is not able to printed so we have to use line number 2 in the4
    //program so that b can be executed
    std::cout<<"value of b which is defined and intialized after main function"<<b;
    std::cout<<"commong variable value is:"<<common_variable;           //variable in local scope prioritised
    int x=10;
    return 0;
}
int b=20;

//globale variable can be used in any function in the program as it is defined outside all functions
//local variables are used within functions only
/*
for global variable: if it is not initialized then output is 0;
for local varibale: if it is not initialized then output is undefined, so we use extern keyword;
if name of local and gloable variable is same, then local variable is given priority
if two variable with same name in same scope, compiler error as ambiguity would be there

==========================================================================

some specification about scopes

->  functions, loops, conditional statements create a new inner scope
->  The outer scope (gloabal scope) variables are accessible in scope but vice verca not true
-> we can create a new scope using {} (curly braces)

range of any datatype in 2^n-1
*/