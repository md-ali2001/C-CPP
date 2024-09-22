#include<iostream>

using namespace std;


class calculator{

    



    string password;

    protected:
    int Number_saved_to_memory;


    public:

    int height;
    int width;
    string company_name;

    calculator(string company_name,int height,int width
    ,int Number_saved_to_memory,string password
    ):company_name
    (company_name),height(height),
    width(width),password(password),Number_saved_to_memory(Number_saved_to_memory){}

void showData()
{
        cout<<"company name:"<<company_name<<endl;
        cout<<"height:"<<height<<endl;
        cout<<"width:"<<width<<endl;
        cout<<"memory:"<<Number_saved_to_memory<<endl;
}

};


class scientific_calculator:public calculator

{
    public:
    string color;

    scientific_calculator(string color,string company_name,int height,int width
    ,int Number_saved_to_memory,string password):calculator( company_name,height,width
    ,Number_saved_to_memory,password)
    {
        this->color=color;
    }


    void showData()
    {
        cout<<"color:"<<color<<endl;
        calculator::showData();
        

    }

                                                                                                      
};

int main()
{

    scientific_calculator sc("black","casio",34,23,3062405387,"ali");
    sc.showData();




}