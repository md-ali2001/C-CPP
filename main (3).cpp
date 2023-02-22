/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


struct Person
{
    string name;
    int age;
    string fieldOfStudy;
    int numSiblings;
    int numID;
    
    /*
    void showData(void)
    {
        cout << "name:" << name << "  age:" << age << "fieldOfStudy: " << fieldOfStudy << endl;
    }
    */
    void Walk(void)
    {
        cout << "The person is walking" << endl;
    }
    
    /*
    void Eat(void)
    {
        cout << "The person is eating" << endl;
    }
    */
    void add(string a, int b)
    {
        name = a;
        age = b;
    }
};

void showData(Person a)
{
    cout << "name:" << a.name << "  age:" << a.age << "fieldOfStudy: " << a.fieldOfStudy << endl;
}

void Eat(Person b)
{
    cout << b.name << " is eating" << endl;
}

int main()
{
    Person person1;
    
    person1.name = "Abdullah";
    person1.age = 19;
    showData(person1);
    Eat(person1);
    
    

    return 0;
}
