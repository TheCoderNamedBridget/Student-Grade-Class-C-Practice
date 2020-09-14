/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include "Student.h"
#include <stdio.h>
#include <iostream>

int main()
{
    Student Tom = Student( "Tom", 85 );
    Student Alice = Student( "Alice", 71 );
    Student Jack = Student( "Jack", 93 );
    Student Janet = Student( "Janet", 76 );
    Student John = Student( "John", 66 );
    
    Tom.print();
    Alice.print();
    Jack.print();
    Janet.print();
    John.print();
    
    

    return 0;
}
