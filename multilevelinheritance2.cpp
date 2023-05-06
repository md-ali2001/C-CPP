/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


class grandfather{
    
    string homeaddress;
    
    
    public:
    string name;
    int age;
    
    grandfather()
    {
        name="null";
        age=0;
        homeaddress="not known";
        phoneno=0;
    }
    
    grandfather(string name,int age,string homeaddress,int phoneno)
    {
        this->name=name;
        this->age=age;
        this->homeaddress=homeaddress;
        this->phoneno=phoneno;
        
    }
    
    void showdata(void)
    {
        cout<<"name: "<<name<<"  age:"<<age<<"  homeaddress:"<<homeaddress<<"  phoneno: "<<phoneno<<endl;
    }
    
    
    
    protected:
    int phoneno;
    
    
    
};


class father:public grandfather
 {
    int salary;
    string disease;
    
    public:
    string skincolor;
    int height;
    
    void setdisease(string disease)
    {
        this->disease=disease;
    }
    void getdisease(void)
    {
        cout<<"disease :"<<disease<<endl;
    }
    
    
    father()
    {
        salary=0;
        disease="null";
        skincolor="not shown";
        height=0;
        socialsecuritynum="not found";
        
        grandfather();
    }
    
    
    father(string name,int age,string homeaddress,int phoneno,int salary,string disease,string skincolor,int height,string socialsecuritynum):grandfather( name, age, homeaddress, phoneno)
    {
        this->salary=salary;
        this->disease=disease;
        this->skincolor=skincolor;
        this->height=height;
        this->socialsecuritynum=socialsecuritynum;
        
    }
    
    void showdata()
    {
        cout<<"salary: "<<salary<<"  disease: "<<disease<<" skincolor:"<<skincolor<<" height:"<<height<<" socialsecuritynum:"<<socialsecuritynum<<endl;
        grandfather::showdata();
    }
    
    
    
    protected:
    string socialsecuritynum;
    
    
    
    
    
};


class child:public father{
    // child will have 9 inherited attributes
    
    public:
    
    
    string course;
    
    child()
    {
        course="null";
        father();
    }
    
    child(string name,int age,string homeaddress,int phoneno,int salary,string disease,string skincolor,int height,string socialsecuritynum,string course):father( name, age, homeaddress, phoneno, salary, disease, skincolor, height, socialsecuritynum){
        this->course=course;
    }
    void showdata(void)
    {
        cout<<"course: "<<course<<endl;
         father::showdata();
    }
    
    
    void set(string a)
    {
        socialsecuritynum=a;
        setdisease(a);  // it will set the private inherited attribute of parent class 
    }
    
};

int main()
{
    // father f1;
   
    // f1.showdata();
    
    child c1("abdullah",19,"abc",542,1200,"null","brown",70,"we3","c++");   // successfully creates object of child
    //c1.disease="headache";   // will give private context error , it means that this attribute has been inherited but can not be modified directly
    //c1.setdisease("headache");
    //c1.socialsecuritynum=3456;
    
    c1.set("567");
    
   
    c1.showdata(); // it will show all the inherited attributes of child
    
    
    /*
    protected vs private
    both are inherited in child class
    child class can not directly(inside child class/within) modify/access the private inherited attribute , but it has to use the public getters/setters of parent
    child class public method can access/modify the protected inherited attribute of parent class\
     child class public method can not access/modify the private inherited attribute of parent class , solution is to use public getter/setter of that class in which those private attribute is declared
    
    */
    
    

    return 0;
}
