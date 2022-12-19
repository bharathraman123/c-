#include<iostream>
#include<string>
using namespace std;
 class student
 {
     public:
     string name;
     int attendence;
     int mark;
    bool passed;

     void input()
     {
         cout<<"enter the name: ";
         cin>>name;
         cout<<"enter the attendence: ";
         cin>>attendence;
         cout<<"enter the mark: ";
         cin>> mark;
     }

     bool pass()
     { 
             if(attendence>=75)
             {
                 if(mark>=50)
                {
                 return true;
                }
             }
     }

     void display()
     {
         string check;
         if(pass()==true)
         {
             cout<<name<<"\t\t"<<attendence<<"\t\t"<<mark<<"\t\t"<<"passed"<<endl;
         }
         else
         {
             cout<<name<<"\t\t"<<attendence<<"\t\t"<<mark<<"\t\t"<<"fail"<<endl;
         }

         //cout<<name<<"\t\t"<<attendence<<"\t\t"<<mark<<"\t\t"<<check<<endl;
     }
 };

     void display2()
     {
         string check;
         if(pass()==true)
         {
             cout<<name<<"\t\t"<<attendence<<"\t\t"<<mark<<"\t\t"<<"passed"<<endl;
         }
         else
         {
             cout<<name<<"\t\t"<<attendence<<"\t\t"<<mark<<"\t\t"<<"fail"<<endl;
         }

         //cout<<name<<"\t\t"<<attendence<<"\t\t"<<mark<<"\t\t"<<check<<endl;
     };
 
     

 int main()
 {
     student stud[20];
     int n;
     cout<<"enetr the number of students: ";
     cin>>n;
     for(int i=0;i<n;i++)
     {
     stud[i].input();
     stud[i].pass();
     }
     cout<<"Details"<<endl;
     for(int i=0;i<n;i++)
     {
     stud[i].display();
     }



 }