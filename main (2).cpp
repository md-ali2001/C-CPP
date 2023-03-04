
#include <iostream>

using namespace std;

  struct cnic{
        int id_no;
        string name;
        string dob;
        string father_name;
        string expiry_date;
        
        
        void verification(void)
        {
             cout<<"verification through cnic"<<endl;
        }
        
        
        void voting(void)
        {
             cout<<"using cnic for voting"<<endl;
        }
        
         void  showdata(void)
    {
        cout<<"id_no:"<<id_no<<"  father_name:"<<father_name<<endl;
    }
        
        
        
        
        
    };
    

struct person
{
    string name;
    int student_id;
    cnic c;
    
    
    void walk(void)
    {
         cout<<"person is walking"<<endl;
    }
    
  void  showdata(void)
    {
        cout<<"name:"<<name<<"  id:"<<student_id<<endl;
    }
    
  
};

/*


struct keyboard
{
    attr;
    
    methods;
}

struct computer
{
    string modelname;
    keyboard k1;
    
    methods;
};








*/


int main()
{
    
    person p1;
    p1.name="abdullah";
    p1.student_id=123;
    p1.showdata();
    
    p1.c.id_no=987;
    p1.c.father_name="ahmed";
    
    p1.c.verification();
    p1.c.showdata();
    
   

    return 0;
}