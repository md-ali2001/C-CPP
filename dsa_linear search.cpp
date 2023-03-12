/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

/* dsa 
searching element in array:
1- linear searching--> it will check from 0 to n-1 and stops when element is found
                       -> so time complexity can vary from 1 to n-1 units of time & it is it's disadvantage
                          slow w.r.t time complexity
                          positive point w.r.t. space complexity
                          

arr[5]={8,9,5,2,1} --> to check whether 5 is in array or not





*/

using namespace std;

int main()
{
    int check;
    int unitsoftime=1;
    int index;
    
    int arr[5]={4,7,8,2,1};
    int findelement=8;
    for(int i=0;i<5;i++)
    {
        
        if(arr[i]==findelement){
            
        check=1;
        index=i;
        break;
        
       }          // break breaks that loop in which it is written
        else
        {}
        
        
        unitsoftime++;
        
        
        
    }            // but according to this time complexity will always be n(size of array)-->break and continue will be used
                 
    if(check==1){
      cout<<"yes element is found"<<endl;
cout<<"index the value found at "<<index<<endl;}
else
cout<<" element not found"<<endl;

cout<<" units of time "<<unitsoftime<<endl;


    return 0;
}
