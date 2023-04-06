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
   //printf scanf (in C,only these can be used , not cin and cout // but in c++ both cin cout and print scanf can be used) // 
// int age=19;
// string val="welcome";
// string name="Abdullah";
//     printf("%s%d","Abdullah's age is ",age) ; // , is used as concatenation operator here         // first arg of fprintf (file ptr) is removed 
//      printf("\n");
//      printf("%s%d",val,age) ;

int age;
float fage;
int num1,num2;
string name;
char c;
     
    //  printf("%s","enter your age");
    //  scanf("%d",&age);                       for single variable input
    //  printf("%s%d","your age is ",age);
    
    // printf("%s","enter var1 and var 2 respectively\n");
    // scanf("%d:%d",&num1,&num2); // here : is used to detect separation operation while entering (new line) and the default separation operator is \n (newline/enter)
    
    
    // printf("\n%d",num1+num2);
    
    scanf("%c%d",&c,&age);
    printf("%s%c%s%d","fage is ",c," and age is ",age);
    
    
    
    
    return 0;
}
