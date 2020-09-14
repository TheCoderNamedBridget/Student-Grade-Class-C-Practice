
#ifndef Student_H
#define Student_H
#include <iostream>
using namespace std;


class Student
{
    public:
        Student();//empty constructor
        Student( string name, int score);//full constructor
        ~Student();//empty deconstructor
        void print();//prints name, score and grade
    
    private:
        string name;
        int score;
        char grade;
    
    
};

#endif
