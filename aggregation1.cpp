/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class address
{
    public:
    int streetno,houseno;
    
    address(int streetno,int houseno)
    {
        this->streetno=streetno;
        this->houseno=houseno;
        
    }
    
    void showdata()
    {
        cout<<"streetno: "<<streetno<<" houseno: "<<houseno<<endl;
    }
};

class person
{
    public:
    string name;
    address *ad1;  // as it is aggregation(has a relation) so we will use pointer instead of normal object(composition)

    
    person(string name,address *ad1)
    {
        this->name=name;
        this->ad1=ad1;
    }
    
    void display()
    {
        cout<<"person name: "<<name<<endl;
        ad1->showdata();
    }
};


int main()
{
    address adr1(13,58);
    person p1("ali",&adr1);
    p1.display();
    return 0;
}
