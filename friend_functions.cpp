#include<iostream>

using namespace std;

class smartphone{

    public:

    string getPassword()
    {
        return password;
    }


    friend void setPassword(smartphone sm1,string password);

    private:

    string password;
    void lockPhone()
    {
        cout<<"Locking the phone"<<endl;
    }
};


void setPassword(smartphone sm,string passwordtoSet)
{
sm.password=passwordtoSet;
}

int main()
{
    smartphone sm1;
    setPassword(sm1,"ali");

    cout<<sm1.getPassword()<<endl;
    return 0;
}