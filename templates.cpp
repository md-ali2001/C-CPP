#include<iostream>

using namespace std;

template<class T>

class smartphone{


    public:

T modelNum;
};

int main()
{
    smartphone <int>sm1;
    sm1.modelNum=0;

    smartphone <string>sm2;
    sm2.modelNum="ali";

    cout<<sm1.modelNum<<endl;
    cout<<sm2.modelNum<<endl;

    return 0;
}