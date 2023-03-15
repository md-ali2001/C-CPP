/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int add(int num1,int num2)
{
    num1=6;
    return num1+num2;
}

int main()
{
    
    int a[5]={3,7,8,9,2};
    
    int *ptr=&a[0];
    
    
    int num1=5;
    int num2=3;
    
    int sum=add(num1,num2); // copy of both values is passed , not actual
    
    cout<<sum<<endl;
    
    cout<<num1<<endl;
    
    // cout<<ptr<<endl;
    
    //  ptr=&a[1];
    // cout<<ptr<<endl;
    
    // ptr=&a[2];
    // cout<<ptr<<endl;
    
    // ptr=&a[3];
    // cout<<ptr<<endl;
    
    // ptr=&a[0];
    
    // for(int i=0;i<5;i++){
        
    //     cout<<*(ptr+i)<<endl;  // incrementing in pointers!=incrementing numbers
    //                          // int+2 = 6 --> normal number incrementing
    //                          // ptr+3 = address after next 2 consecutive locations
        
    // }
    
    
//      int a = 5;
//   int b = 6;
   
   
   
//   int *ptr = &a;
//   int *ptr2=&b;
//   cout << *ptr+*ptr2 << endl;
   
   
   
//   ptr = &c;    referencing--> pointing to specific memory address
//   cout << ptr << endl;
   
   
   
//   *ptr = *ptr + 1;   *--> dereferencing --> value at that address
//   cout << c << endl;



   

    return 0;

    
}