/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

//multiple inheritance , 2 parent and 1 child

class os
{
    string password;
    
    public:
    string platform;
    string releasedate;
    int size;
    
    
    os()
    {
        platform="null";
        releasedate="null";
        size=0;
        password="null";
    }
    
    os(string platform,string releasedate,int size,string password)
    {
        this->platform=platform;
        this->releasedate=releasedate;
        this->size=size;
        this->password=password;
    }
    
    void showdata()
    {
        cout<<"platform :"<<platform<<endl;
        cout<<"releasedate :"<<releasedate<<endl;
        cout<<"size :"<<size<<endl;
        cout<<"password :"<<password<<endl;
    }
    
    
};


class windows:public os{
    
    public:
    string version;
    string company;
    
    
    windows()
    {
        version="null";
        company="null";
        os();
    }
    
    windows(string  version,string company,string platform,string releasedate,int size,string password):os( platform, releasedate,size, password)
    {
        this->version=version;
        this->company=company;
        
    }
    
    void showdata()
    {
        
        cout<<"version :"<<version<<endl;
          cout<<"company :"<<company<<endl;
          os::showdata();
    }
};


class android:public os
{
    public:
    int api;
    
    
    android()
    {
        api=0;
        os();
    }
    
    android(int api,string platform,string releasedate,int size,string password):os( platform, releasedate,size, password)
    {
        this->api=api;
    }
    
    void showdata()
    {
        cout<<"api: "<<api<<endl;
        os::showdata();
    }
};







int main()
{
    
    android and1;
    //and1.showdata();
    
    
    windows w1;
    w1.showdata();
    
    

    return 0;
}
