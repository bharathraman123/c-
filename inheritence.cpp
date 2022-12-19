#include<iostream>
#include<string>

using namespace std;

class employee
{
    public:
    string name;
    int empno;
    int payrate;

    employee()
    {
        cout<<"constructor created"<<endl;

    }

    void input()
    {
        cout<<"enter the name of employee: ";
        cin>>name;
        cout<<"enter the employee no: ";
        cin>>empno;
        cout<<"enter payrate : ";
        cin>>payrate;
    }

    virtual void pay()
    {
        cout<<"payrate = "<<payrate<<endl;

    }

};

class manager:public employee
{
    int ch;
    bool isSalaried;
    void basis()
    {
    cout<<"1.hourly basis"<<endl<<"2.salary basis";
    cin>>ch;
    }
    void pay()
    {

        isSalaried=true;
         switch(ch)
         {
            case 1: cout<<"hourly basis = "<<payrate/24;
                     break;
            case 2: cout<<"salary basis = "<<payrate*30;
                     break;
            default :cout<<"invalid"; 

         }

        
    }
};

class supervisor:public employee
{
    string department;
    void departments()
    {
        cout<<"enter department:  ";
        cin>>department;
    }
        
        void pay()
        {
            cout<<"salaried pay= "<<payrate*30;
        }

};
    

    int main()
    {
        employee emp;
        manager man;
        supervisor sup;
        employee *bptr;
        emp.input();
        bptr=&emp;
        bptr->pay();
        man.input();
        bptr=&man;
        bptr->pay();
        sup.input();
        bptr=&sup;
        bptr->pay();


    }