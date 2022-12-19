#include<iostream>
#include<string>
using namespace std;
const int workinghours=6;

class employee
{
    public:
    string name;
    int emp_no;
    int payrate;

    employee()
    {
        cout<<"enter name: ";
        cin>>name;
        cout<<"employement number: ";
        cin>>emp_no;
        cout<<"payrate: ";
        cin>>payrate;
    }

    virtual void pay()
    {
        cout<<"payrate: "<<payrate<<endl;
    }

};

class manager:public employee{

    public:
    bool isSalaried;

    void basis()
    {
        int ch;
        cout<<"1.hourly basis"<<endl<<"2.salary basis"<<endl<<"enter choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:payrate =payrate/workinghours;
            break;
            case 2:payrate=payrate*30;
            break;
            default:cout<<"enter a valid choice::"<<endl;
        }

    }

    void pay()
    {
        cout<<"payrate: "<<payrate<<endl;
    }
};

class supervisor:public employee{

    public:

    void dep()
    {
        string depart;
        cout<<"enter departmnet: ";
        cin>>depart;
    }

    void pay()
    {
        cout<<"payrate:  "<<payrate*30<<endl;
    }
};

int main()
{
    employee emp;
    employee *bptr;
    manager man;
    supervisor sup;
    
    
cout<<"employee::"<<endl;
    bptr=&emp;
    bptr->pay();

cout<<"manager::"<<endl;
    man.basis();
    bptr=&man;
    bptr->pay();


cout<<"supervisor::"<<endl;
    sup.dep();
    bptr=&sup;
    bptr->pay();

    return 0;
}