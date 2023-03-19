/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void changewholearray(int *a)  // initially it has the address of a[0]
{
    
    //a+4;    pointing to 4th index of a array
   // *(a+4); pointing to value stored at a[4] index
   
   *a=7;       // for loop cant be used as we have to assign different values to each address
   *(a+1)=9;       
    *(a+2)=0;  
     *(a+3)=1;  
      *(a+4)=4;       
    
}



int main()
{
    
    
int arr[5]={3,8,7,5,2}; // we have to chnage all the values of array actually , but dont call function each time , so here comes the concept of consecutive memory locations

changewholearray(&arr[0]);  // if function knows the address of 0th index , then it can also find others indexes address

for(int i=0;i<5;i++)
cout<<arr[i]<<"\t";


   

    return 0;

    
}
