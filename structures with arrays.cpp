/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


struct person
{
    string name;
    int id;
    
    void work(void)
    {
        cout<<"person is working"<<endl;
    }
    
    void eat(void)
    {
          cout<<"person is eating"<<endl;
        
    }
    
    void showdata(void)    //equivalent to showdata()
    {
        cout<<"person name: "<<name<<"   id: "<<id<<endl;
    }
    
    void add(string a,int b)
    {
        name=a;
        id=b;
    }
    
    
};

int main()
{
//   person p1;
//   p1.add("abdullah",1234);
//   p1.showdata();

 // int a[5];
 
 person  p[6];    // 3 objects of data type person has been created   p[0],p[1],p[2]    // person p1,p2,p3,p4,p5,p6
 
 // int a,b,c;    int arr[3]==  arr[0]  , arr[1]   , arr[2]
 
//  p[0].add("abdullah",123);
//  p[1].add("ali",98);
//  p[2].add("ibaad",45);
//  p[3].add("hammad",89);
//  p[4].add("usman",1239);
//  p[5].add("abdullah",56);
 
 
//  for(int i=0;i<6;i++)
//  {
//      p[i].showdata();
//  }
string name;
int id;

for(int i=0;i<6;i++)
{
    cout<<i+1<<" enter name and id of person respectively"<<endl;    // cout<<"enter name and id of 1 person respectively"
    cin>>name>>id;                                                   // cin>>name>>id;
    p[i].add(name,id);                                               // p1.add(name,id);
}

for(int i=0;i<6;i++)
{
    p[i].showdata();                         // to take input and show output of 6 objects of person , without array :24 , with array :4 
}
 
 

    return 0;
}
