//Week 1, day 1.

/*The purpose of this small program is to understand the terminal commands to 
compile and run the file.*/



//Library headers
#include<iostream>

int main()
{
    //Practice global variables int(4bytes)
    int x = 10;
    int y = 4;
    int z = 10;

    //Prints out the arithmetic results.
    std::cout<< x + y << '\n';
    std::cout<< x * y << '\n';
    std::cout<< z + y - x << '\n';
    
    return 0;// This serves as an exit point of main() function.
}

