

#include <iostream>

using namespace std;

// void add(int ,int,int );

// int main()
// {
//   int n1=4,n2=6,n3=16;
//   add(n1,n2,n3);
//   //cout<<"sum is "<<d;
   
//     return 0;
    
//     /*
    
//     return_datatype   function_name(return_datatype varnamer ,return_datatype varname)
//     {
//         definiton/body/implementation
//     }
    
//     fuction prototype can be done separately , or definiton and prototype can be done together
//     if we have to do prototype separately , it is done before main() function--> int add(int,int);
//     if we have to do both together--> only function def is written , before main() function
    
//     whenever function returns value , it is assigned to variable
//     if not returns , then no need
//     in function call , the passing args' name and function def's args' name can be similar or different
    
//     */
// }

// void add(int n1,int n2,int n3)
// {
//     //int sum=n1+n2;
//     //return n1+n2+n3;
//     cout<<"the sum is "<<n1+n2+n3<<endl;
// }






// int add(int n1,int n2)
// {
//     return n1+n2;
// }



// int main()
// {
//     int n1=4,n2=5;
//     int sum=add(n1,n2);
//     cout<<"the sum is "<<sum;
//     return 0;
// }



// string print(string name)
// {
//     string c= "hello "+name;
//     return c;
// }

// int main()
// {
    
//     string name;
//     cout<<"enter your name"<<endl;
//     cin>>name;
//     string name1=print(name);
//     cout<<name1;
    
    
  
    
    
    
//     return 0;
// }



string print(string name,int age)
{
 
    string c= "user's name is "+name+" and age is "+to_string(age);
   return c;
}

int main()
{
    
    string name;
    int age;
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"enter your age"<<endl;
    cin>>age;
    
    string name1=print(name,age);
    cout<<name1;
    
    
  
    
    
    
    return 0;
}




