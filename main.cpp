/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

struct computer{
    
    string model_name;
    int screen_height;
    int screen_width;
    string keyboard_type;
    int ram;
    float processor;
    
    void showdata()
    {
        cout<<"model_name:"<<model_name<<"   screen_height:"<<screen_height<<"   screen_width:"<<screen_width<<endl;
      
    }
    
    void add(string a,int b,int c)
    {
        model_name=a;
        screen_height=b;
        screen_width=c;
    }
    
    
    
    
    
} ;






int main()
{
    computer comp1,comp2,comp3,comp4;
    comp1.model_name="DELL";
    comp1.screen_height=10;
    comp1.showdata();
    
   
    
     comp2.model_name="HP";
    comp2.screen_height=12;
    comp2.showdata();
    
    comp3.add("lenovo",34,19);
    comp3.showdata();
    
    comp4.add("lenovo",34,21);
    comp4.showdata();
    
    
    
    
    
    
    

    return 0;
}