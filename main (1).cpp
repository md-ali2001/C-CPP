/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    /* 
 break and continue
 break is used to stop the execution of loop and it stops that loop in which it is written
 
 
 
    
    
    */
    
    // int a=0;
    // for(a;a<10;a++)
    // {
    //     cout<<a<<endl;
    //     if(a==0)
    //     break; 
        
    //                 // stops the loop and comes to outside loop when value(a) reaches 5
    // }
    
    char ch;
    
    
    // while(ch!='a')
    // {
    //     cout<<"enter character again"<<endl;
    //     cin>>ch;
    //     if(ch=='c')
    //     break;
    // }
    
    
    // for(int i=1;i<5;i++)
    // {
        
    //     for(int j=1;j<11;j++)
    //     {
    //         cout<<i*j<<endl;
    //         if(j==5)
    //         break;            // it will break this inner loop
    //     }
    //     cout<<endl;
    //     if(i==3)
    //     break;             // it will break outer loop which indirectly breaks inner loop
    // }
    
    
    /*
    continue : it re executes the loop and ignores the next written body statements
    
    
    
    
    */
    
    
    
    for(int i=0;i<10;i++)
    {
        if(i%2!=0)
        continue;
        cout<<i<<endl;
        
    }
    
    cout<<"good bye"<<endl;
    
    /*
    modulus operator returns the remainder after dividing first number with second , a%b means it 
    will divide a/b and will return the remainder   8%5 means 3
    
    
    */

    return 0;
}