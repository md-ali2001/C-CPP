/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
   
    string data[3][4];
    int i,j;
    
    for(int i=0;i<3;i++)// for taking input 2d array
    {
        cout<<i<<" enter sports name\n";
        cin>>data[i][0];                           //[0][0]==sports -->[0][1]
        for(int j=1;j<4;j++)                                    //  -->[0][2]
                                                                //  -->[0][3]
                                                  //[1][0].....
                {                                  //[2][0]
                                                  //[0][0]==sports name //[0][1],[0][2],[0][3]-->player names
             cout<<data[i][0]<<" enter corresponding player\t";
            
             cin>>data[i][j];
                }
    }
    
    
    for(int i=0;i<3;i++) // for printing 2d array
    {
        cout<<endl;
        cout<<"\nsports name is " <<data[i][0]<<" and its players are :"<<endl;
        for(int j=1;j<4;j++)
        cout<<j<<"."<<data[i][j]<<"  ";
        
    }
    

    return 0;
}
