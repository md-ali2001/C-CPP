#include <iostream>

using namespace std;

int main()
{
    /*for ( initializer ; condition ; increment/decrement)
    {
        
    }*/
    
    // int i=0;
    
    // for( ; i<10 ; i=i+2)   //i--      --> i++   i=i+1
    
    // cout<<"hello world\n";
    
    // /* 1.initialize  
    // 2. condition checked
    // 3. statement executed
    // 4. variable update
     
    //  repeat from step 2
    // */
    
    // int i=1;
    
    
    
    // for(;i<=30;)                   //initializer can be done outside for loop
    // {                              //variable update can be done inside body of for loop
    // cout<<i<<endl;
    // i=i+2;
    
    // }
    
    for(int i=1;i<6;i++){                  // i=1     j=1     // until inner for loop condition becomes false , it remains in inner for loop
     for(int j=1;j<8;j++)                  // i=1     j=2
     cout<<i<<" x "<<j<<" = "<<i*j<<endl;  // i=1     j=3                         // 1  x  1  = 1          1 x 2 = 2
                                           //i=1      j=4
}                                          // i=1     j=5
    return 0;                              // i=1     j=6
}                                          // i=1     j=7
                                           //i=2      j=1
