


#include <iostream>
#include "Student.h"
using namespace std;

Student::Student()
{
    
}

Student::Student( string nameInput, int scoreInput )
{
    name = nameInput;
    score = scoreInput;
    if ( score <= 100 && score >= 90 )
    {
        grade = 'A';
    }
    else if ( score < 90 && score > 79)
    {
        grade = 'B';
    }
    else if ( score < 80 && score > 69 )
    {
        grade = 'C';
    }
    else if ( score < 70 && score > 59)
    {
        grade = 'D';
    }
    else 
    {
        grade = 'F';
    }
}

Student::~Student()
{
    
}

void Student::print()
{
    cout<<"Name: "<<name<<" Score: "<<score<<" Grade: "<<grade<<endl;
}
