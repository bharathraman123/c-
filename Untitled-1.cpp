#include<iostream>
using namespace std;
  
class bank
{
    public:
    char name[20];
    int acc_no;
    char acc_type[10];
    int balance;

    void input()
    {
        cout<<"enter the name of depositor:  ";
        cin>>name;
        cout<<"enter the account number :  ";
        cin>>acc_no;
        cout<<"enter the account type:  ";
        cin>>acc_type;
        balance=0;
        cout<<"balance :"<<balance<<endl;
    }

    void deposite()
    {
        int amount;
        cout<<"enter the amount to deposite:  ";
        cin>>amount;
        balance=balance+amount;
    
    }

    void withdraw()
    {
        int reduce;
        cout<<"balance:  "<<balance<<endl;
        cout<<"enter the amount to withdraw:  ";
        cin>>reduce;
        balance=balance-reduce;
        cout<<"current balance:  "<<balance<<endl;

    }

    void details()
    {
        cout<<"Name:  "<<name<<endl;
        cout<<"balance:   "<<balance<<endl;
    }
};

int main()
{
    bank obj;
    obj.input();
    obj.deposite();
    obj.withdraw();
    obj.details();
}

