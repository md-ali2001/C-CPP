/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


//type 4- computer has keyboard,keyboard has inner circuit

/*
  person
  |
  head
  |
  innerhead
  
  
  1- simple structure
  2- 1 structure has 1 structure (sub-structures)
  3- 1 structure has multiple structures(sub-structures)
  4- nesting -->extension of type 3
  *- mixture of 3 and 4 

*/




struct innerhead{
    string braintype;
    int numberofcells;
    
    void think(void)
    {
        cout<<"you are thinking"<<endl;
    }
    
    void dream(void)
    {
        cout<<"you are dreaming"<<endl;
    }
    
    
    void innerheadshowdata(void)
    {
        cout<<"braintype:"<<braintype<<"  numberofcells:"<<numberofcells<<endl;
    }
    
    
    
    
};


struct head{
    
    int radius;
    string haircolor;
    innerhead ih;
    
    
    void movehead(void)
    {
         cout<<" you are moving your head"<<endl;
    }
    
    void headshowdata(void)
    {
         cout<<"radius:"<<radius<<"  haircolor:"<<haircolor<<endl;
    }
    
};



struct person
{
    string name;
    head h;
    
    void run(void)
    {
         cout<<"person is running"<<endl;
    }
    
    void personshowdata(void)
    {
         cout<<"name:"<<name<<endl;
    }
};

int main()
{
    person p;
    p.name="abdullah";
    p.run();
    p.personshowdata();
    p.h.radius=23;
    p.h.haircolor="black";
    p.h.movehead();
    p.h.headshowdata();
    p.h.ih.braintype="intelligent";
    p.h.ih.numberofcells=230;
    p.h.ih.think();
    p.h.ih.innerheadshowdata();
    
    return 0;
}