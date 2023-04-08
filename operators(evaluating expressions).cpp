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
   /* 5 main types of operators are 
1 increment Operators.
2 arithmetic Operators.
3 Relational Operators.
4 Logical Operators/boolean operators
5 assignment Operators */                 // this list is based on higher->lower precedence
                                         // iarla
int b=6;
int a= 4*b++  > 12  && 1;   // to solve it manually , we should know operators precedence , association(left to right or vice versa) , sub type precedence

/*
solving above expression using operator precedence and association
1. int a=4*7 >12 && 1;
2. int a=28 >12 && 1;
3. int a=1 && 1;
4. int a=1;          association of = operator is from right to left

*/

cout<<a<<endl;

int c= 5 && b++ >3 *2;
/*
1 int c= 5 && 7 >3 *2;
2 int c= 5 && 7 >6;
3 int c= 5 && 1;
4 int c= 1;            // any value except 0 is regarded true


*/
cout<<c<<endl;

int d= 5 && b++ >3 *3;

/*
1 int d= 5 && 7 >3 *3;
2 int d= 5 && 7 >9;
3 int d= 5 && 0;
4 int d= 0;



*/

cout<<d<<endl;
 
 int e= 5+5 && b++ >3 *3!=6 || 0;
 
 //solving above expression using operator precedence,association and sub type precedence
 
 /*
 sub type precedences :
 logical : and or not     association is left to right
 arithmetic : bodmas
 relational : <  <=  >  >=  ==  !=
 
 ! has the highest precedence except among logical operators
 
 
 */
 
 
 /*
 1 int e= 5+5 && 7 >3 *3!=6 || 0;
 2 int e= 5+5 && 7 > 9!=6 || 0;
 3 int e= 10 && 7 > 9!=6 || 0;
 4 int e= 10 && 0 !=6 || 0;
 5 int e= 10 && 1 || 0;
 6 int e= 1 || 0;
 7 int e= 1;
 
 
 
 */
 
 cout<<e<<endl;
 
 
 int f=  5+5 || b++ >3 *3!=6 || 0 != 0 == 4;
 
 /*
 1 int f=  5+5 || 7 >3 *3!=6 || 0 ! 0 == 4;
 2 int f=  5+5 || 7 >9!=6 || 0 ! 0 == 4;
 3 int f=  10 || 7 >9!=6 || 0 ! 0 == 4;
 4 int f=  10 || 0!=6 || 0 ! 0 == 4;
 5 int f=  10 || 0!=6 || 0 ! 0;
 6 int f=  10 || 1 || 0 ! 0;
 7 int f=  10 || 1 || 0 ! 0;  // association will be used here to solve || and it will be solved left to right
 8 int f=  1 || 0 ! 0; 
 9 int f=  1 ! 0;
 10 int f=  1 != 0;        
 
 
 */

cout<<f<<endl;

int g=1==!0;
int h= 6+ 2 && !0;

/*
1 int h= 8 && !0;
2 int h= 8 && 1;
3 int h= 1;


*/

cout<<g<<endl;
cout<<"h "<<h<<endl;

int i=!6||0;
cout<<"i "<<i<<endl;


    return 0;
}
