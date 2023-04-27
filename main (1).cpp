/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
// class has two things , attributes and methods

class human{
    // default access modifier is private
    // generally , purpose of constructor is to initialize the attributes
    public:
    string name;
    char gender;
   
    int age;
    
    human()  // default constructor , overloading(within same class , same name,different signature)
    {
        name="null";
        gender='n';
        age=5;
    };
    
    int  human(char gender1,int age1,string pass)
    {
        name=name1;
        gender=gender1;
        age=age1;
        password=pass;
        
        
        
    };
    
    
    
    /* these are called getters and setters generally used for set and retrieve private attribute , 
     purpose of getter and setter can also be fulfilled using constructor and showdata , but getter and 
     setters provide ease when we have to only deal with specifc private attribute
    
    
    
    
    */
    
    void setpassword(string pass)
    {
        password=pass;
    }
    
    void getpassword(void)
    {
        cout<<"password: "<<password<<endl;
    }
    
     void showdata(){
        cout<<"name: "<<name<<" gender: "<<gender<<" age: "<<age<<" password: "<<password<<endl;}
    
    private:
    string password;
    
    protected :
    int phoneno;
     
   
    
    
    
   
        
    
    
};

int main()
{
    human h1("abdullah",'M',19,"new");
    h1.showdata();
   
   
    human h2;     // no parenthesis in case of default constructor
    //h2.password="ali";  // will throw error --> password is declared in private context
    h2.name="ibaad";  // will not throw error as name is public
   // h2.phoneno=432;   // will throw error as phoneno private
   h2.showdata();
   
   human h3("ali",'M',21,"new2");
//   h3.setpassword("pakistan");    
//   h3.getpassword();
   h3.showdata();
   
   
   human h4=h1;  // will create local copy of class
   h1.name="aa";
   h4.showdata();
   
    
    
    

    return 0;
}