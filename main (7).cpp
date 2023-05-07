/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
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
    
    public:
    int height;
    
    mermaid()
    {
        height=0;
    }
    
    mermaid(string name,string type,int height):human(name),fish(type)
    {
        this->height=height;
    }
    void showdata()  // own showdata was needed to control the ambiguity of calling showdata of both parents, at that time there was no own attrbiute
    {
        cout<<"height: "<<height<<endl;
        human::showdata();
        fish::showdata();
    }
    
};



int main()
{
    
    mermaid m1;   // it will call default constructor of both parents
    // m1.showdatahuman();
    // m1.showdatafish();
     m1.showdata();
    
    mermaid m2("ali","jellyfish",23);
    m2.showdata();
    
    
    

    return 0;
}
