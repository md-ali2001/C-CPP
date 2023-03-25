/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    // if else can do the task of switch case --> mandatory
    // but vice versa is --> not mandatory
    
    // switch case can't be used for relational , boolean , arithmetic and other operators (combined expressios)
    // switch case if used for decision on single value 
    
    // char var;
    
    // cout<<"enter number between 1 to 5"<<endl;
    // cin>>var;
    
/*    switch(value FOR decision){  // value of decision is either int or char

case : single value to be compared
statements;
break;

case : single value to be compared
statements;
break;

default :
statements;

}

*/


// switch(var)
// {
//     case 'a' :                               // if case has multiple statements , no need to enclose in brackets
//     cout<<"entered number is 1"<<endl;
//     break;
//      case 'b' : 
//     cout<<"entered number is 2"<<endl;
//     break;
//      case 'c' : 
//     cout<<"entered number is 3"<<endl;
//     break;
//      case 'd' : 
//     cout<<"entered number is 4"<<endl;
//     break;
//      case 'e' : 
//     cout<<"entered number is 5"<<endl;
//     break;
    
//     default : 
//     cout<<"entered wrong number"<<endl;
// }



// float a=3,b=2;

// char opr='^';

// switch(opr)
// {
//     case '+':{
//     cout<<a+b<<endl;  // using curly brackets for multiple case statements is redundant
//     break;}
     
//      case '-':{
//     cout<<a-b<<endl;
//     break;}
    
//      case '*':
//     cout<<a*b<<endl;
//     break;
    
//      case '/':
//      if(b==0)cout<<"cant divide by 0"<<endl;
//      else
//     cout<<a/b<<endl;
//     break;
    
//     case '^' :
//     cout<<pow(a,b)<<endl;
//     break;
    
//     default :
//     cout<<"sorry , operator is not correct"<<endl;
// }

float var=3.4;
switch (var)   // although float is single value , but not allowed in switch case
                   // the only condition is that switch var is either int or char
{
    case 4.5 :
    cout<<"entered number is 4.5"<<endl;
    break;
      case 4.6 :
    cout<<"entered number is 4.6"<<endl;
    break;
    default:
    cout<<"wrong number";
}


    return 0;
}
