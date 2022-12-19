#include<iostream>
#include<string>

using namespace std;
class Bank
{
    public:
    string name;
    int acc_no;
    float balance=1000;

    void input()
    {
        cout<<"enter the name: ";
        cin>>name;
        cout<<"enter the account number: ";
        cin>>acc_no;
    }

    void deposite()
    {
        int amount;
        cout<<"enter the amount to deposite: ";
        cin>>amount;
        balance=balance+amount;
    }

    void display()
    {
        cout<<"name: "<<name<<endl;
        cout<<"account number: "<<acc_no<<endl;
        cout<<"balance: "<<balance<<endl;
    }

    
};

int main()
{
    int n,i,j;
    Bank obj[20];
    Bank temp;
    cout<<"enter the number of customers: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        obj[i].input();
        obj[i].deposite();
    }

    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(obj[j].balance > obj[j+1].balance )
            {
                temp=obj[j];
                obj[j]=obj[j+1];
                obj[j+1]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
       // cout<<obj[i].name<<"\t\t"<<obj[i].acc_no<<"\t\t"<<obj[i].balance<<endl;
       obj[i].display();
    }
    return 0;

}