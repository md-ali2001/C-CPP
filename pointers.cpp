/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
// int a=2 --> a is nothing but a name given to memory space
// int a[5]--> there are 5 consecutive memory locations made in memory address space
// pointer stores the address of variable
// we can do manipulative operations on memory address
// & is address operator
// * is address value operator

// pointer can point to only one address at a time-can store only one address at a time
 
int main()
{
    int a=2;
    int b=4;
    int c=8;
    // how to declare a pointer
    
    // data_type *pointer_name
    // data_type *pointer_name=value to be assigned
    
    
 // integer pointer named ptr has been created .. pointer var can store/point to one address
 int *ptr;   // it stores the logical addres of a (hex format)
 ptr=&a;
 cout<< ptr<<endl;
 
 ptr=&b;
 cout<< ptr<<endl;
 
 ptr=&c;
 cout<< ptr<<endl;
 
 
 // to set the value of variable(memory address) by using pointers
 
 *ptr=1;  // the value stored at ptr address will be changed- the memory address of ptr and c are same
 cout<<c<<endl;
 
ptr=&a;  // stores address of a
*ptr=9;   // changes value of that stored address
*ptr=*ptr+1;     // i++   ==   i=i+1
 cout<<a<<endl;
 
    
    
    
   

    return 0;
}
