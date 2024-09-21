#include<iostream>

using namespace std;

class camera{

    public:
    void takeSnap()
    {
        cout<<"taking snap"<<endl;
    }

    public:

     void start(){
        cout<<"camera starting"<<endl;
    }
};


class phone{
    public:

    void start()
    {
        cout<<"phone starting"<<endl;
        

    }

};



class smartphone:public phone,camera{

    public:
    void start()
    {
        phone::start();
        camera::start();


    }
};

int main()
{


    smartphone sm1;
    sm1.start();
    return 0;
}