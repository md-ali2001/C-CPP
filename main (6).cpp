/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

//multiple inheritance , 2 parent and 1 child

class human
{
    public:
    string name;
    
    human()
    {
        name="null";
    }
    
    human(string name)
    {
        this->name=name;
    }
    
    void showdata(void)
    {
        cout<<"name: "<<name<<endl;
    }
};


class fish
{
    public:
    string type;
    
    fish()
    {
        type="null";
    }
    
    fish(string type)
    {
        this->type=type;
        
    }
    
    void showdata(void)
    {
        cout<<"type :"<<type<<endl;
    }
    
};


class mermaid:public human,public fish
{
    
};



int main()
{
    
    

    return 0;
}