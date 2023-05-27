/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class hours
{
    public:
    int h;
    
    hours(int h)
    {
        this->h=h;
    }
};




class minutes
{
    public:
    int m;
    
    minutes(int m)
    {
        this->m=m;
    }
};


class seconds
{
    public:
    int s;
    
    seconds(int s)
    {
        this->s=s;
    }
};



class Time
{
    
    public:
    string Timeformat;
    hours *h1;
    minutes *m1;
    seconds *s1;
    
    
    Time(string Timeformat,hours *h1,minutes *m1, seconds *s1){
    
    
    this->Timeformat=Timeformat;
    this->h1=h1;
    this->m1=m1;
    this->s1=s1;
    
    }
    
    
    void show()
    {
        cout<<"dateformat: "<<Timeformat<<endl;
        cout<<"hours:"<<h1->h<<"  minutes:"<<m1->m<<"  seconds:"<<s1->s<<endl;
        
    }
};



int main()
{
    hours h1(3);
    minutes m1(40);
    seconds s1(50);
    
    Time t1("hours,minutes,seconds",&h1,&m1,&s1);
    t1.show();
    
    return 0;
}