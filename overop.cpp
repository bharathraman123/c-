#include<iostream>
#include<string>
using namespace std;

class student
{
    public:
    int age;
    string name;
    int reg_no;
    
    virtual void sort()=0;
    
};

class Btech:public student{
    public:
    int num,mark;
    char name[20];
    int rollno,n;

    void input()
    {
        cout<<"Enter number of students";
        cin>>n;
        for(int i=0; i<n; i++){
            
        }
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll no: ";
        cin>>rollno;
    }

    void sort()
    {
        Btech temp;
        for(int i=0; i<num; i++){
            for(int j=i+1; j<num; j++){
                if(this[i].mark>this[j].mark){
                    temp=this[i];
                    this[i]=this[j];
                    this[j]=temp;
                
                }
            }
        }
    }
    void display()
    {
        for(int i=0; i<num; i++){
            cout<<"Name"<<name;
        }
    }

};
int main()
{
    Btech s;
    int n;

    for(int i=0; i<n; i++){

    }
    s.input();
    s.display();
    s.sort();
    s.display();
}