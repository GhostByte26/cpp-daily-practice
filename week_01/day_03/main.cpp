//Day 3 Week 1, small program to show how to the values are tracked.

//Library headers.
#include<iostream>

//Main function.
int main(){

//global variables.
int number = 5;
int result = number + 10;
//Assigning a new value to the variable number.
number = result * 2;

//Output the values on seprate lines.
std::cout<< number <<'\n';
std::cout<< result <<'\n';

return 0;
}