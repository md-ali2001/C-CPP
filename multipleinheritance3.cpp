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
    private:
    
    string company;
    
    public:
    string name;
    
    void setcompany(string company)
    {
        this->company=company;
    }
    
    human()
    {
        name="null";
        company="none";
    }
    
    human(string name,string company)
    {
        this->name=name;
        this->company=company;
    }
    
    
    void showdata(void)
    {
        cout<<"name: "<<name<<endl;
        cout<<"company :"<<company<<endl;
    }
    
    
};


class fish
{
    private:
    string disease;
    
    public:
    string type;
    
    void setdisease(string disease)
    {
        this->disease=disease;
    }
    
    
    fish()
    {
        type="null";
        disease="none";
    }
    
    fish(string type,string disease)
    {
        this->type=type;
        this->disease=disease;
        
    }
    
    void showdata(void)
    {
        cout<<"type :"<<type<<endl;
        cout<<"disease : "<<disease<<endl;
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
    
    mermaid(string name,string company,string type,string disease,int height):human(name,company),fish(type,disease)
    {
        this->height=height;
    }
    void showdata(void)  // own showdata was needed to control the ambiguity of calling showdata of both parents, at that time there was no own attrbiute
    {
        cout<<"height: "<<height<<endl;
       
        human::showdata();
        fish::showdata();
    }
    
    void set(string a)
    {
        setdisease(a);
        setcompany(a);
    }
    
};



int main()
{
    
    mermaid m1;   // it will call default constructor of both parents
    // m1.showdatahuman();
    // m1.showdatafish();
    // m1.showdata();
    
    mermaid m2("ali","abc","jellyfish","Aeromonasinfection",23);
    m2.setcompany("xyz");
    m2.setdisease("xyz");
    m2.showdata();
    
    
    

    return 0;
}
