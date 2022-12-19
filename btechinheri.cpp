/*#include<iostream>
#include<string>
using namespace std;

 class student
 {
     public:

     string name;
     int reg_no;
     int age;

     virtual void sort(int)=0;
    

 };

 class btech:public student{
     public:
     int mark;

     void input()
     {
         cout<<"enter the name:";
         cin>>name;
         cout<<"enter the register number: ";
         cin>>reg_no;
         cout<<"enter age: ";
         cin>>age;
         cout<<"enter the mark: ";
         cin>>mark;
         
     }

     void sort(int no)
     {
         btech temp;
         for(int i=0;i<no;i++)
         {
             for(int j=1;j<no-i;j++)
             {
                 if(obj[j].mark>obj[j+1].mark)
                 {
                     temp=obj[j];
                     obj[j]=obj[j+1];
                     obj[j+1]=temp;

                 }

             }
         }

     }
     void output(int no)
     {
         for(int i=0;i<no;i++)
         {
             cout<<obj[i].name<<"\t\t"<<obj[i].reg_no<<"\t\t"<<obj[i].age<<"\t\t"<<mark<<endl;
         }
     }

 };

 class Mtech:public student
 {
     public:
     float gpa;

     void initialise()
     {
         cout<<"enter the name:";
         cin>>name;
         cout<<"enter the register number: ";
         cin>>reg_no;
         cout<<"enter age: ";
         cin>>age;
         cout<<"enter the mark: ";
         cin>>gpa;
         
     }

     void sort(int no)
     {
         Mtech temp1;
         for(int i=0;i<no;i++)
         {
             for(int j=1;j<no-i;j++)
             {
                 if(obj[j].gpa>obj[j+1].gpa)
                 {
                     temp1=obj[j];
                     obj[j]=obj[j+1];
                     obj[j+1]=temp1;

                 }

             }
         }

     }

     void display(int no)
     {
         for(int i=0;i<no;i++)
         {
             cout<<obj[i].name<<"\t\t"<<obj[i].reg_no<<"\t\t"<<obj[i].age<<"\t\t"<<gpa<<endl;
         }
     }

 };

 int main()
 {
     int ch;
     int n;
     cout<<"enter the number of students: ";
     cin>>n;
     student *bptr;
     btech s1[10];
     Mtech s2[10];

     
     cout<<"1.btech"<<endl<<"2.mtech"<<endl<<"enter choice: ";
     cin>>ch;
     switch(ch)
     {

     case 1:
     for(int i=0;i<n;i++)
     {
         s1[i].input();
         
     }

     bptr=new btech();
     bptr->sort(n);
     s1.output(n);
     break;

     case 2:
      for(int i=0;i<n;i++)
     {
         s2[i].initialise();
         
     }
     bptr=&s2;
     bptr->sort(n);
     s2.display(n);
     break;

     default: cout<<"invalid choice";

    return 0;



 }
 }*/
 #include<iostream>
 using namespace std;
 class Student
 {
     public:
     int age;
     int reg_no;
     char name[20];
     

     virtual void sort(int)=0;

 };

 class Mtech:public Student
 {
     public:

     float gpa;
     Mtech()
     {

     }

     void input()
     {
         cout<<"enter name:";
         cin>>name;
         cout<<"enter reg";
         cin>>reg_no;
         cout<<"enter age:";
         cin>>age;
         cout<<"enter gpa:";
         cin>>gpa;

     }
     void output()
     {
        
         

         cout<<"\n"<<name<<"\t\t"<<reg_no<<"\t\t"<<age<<"\t\t"<<gpa<<endl;
         
     }

     void sort(int);

 };
static Mtech obj[10];
 void Mtech::sort(int no)
 {
      Mtech temp1;
         for(int i=0;i<no;i++)
         {
             for(int j=i+1;j<no;j++)
             {
                 if(obj[i].gpa>obj[j].gpa)
                 {
                     temp1=obj[i];
                     obj[i]=obj[j];
                     obj[j]=temp1;

                 }

             }
         }

 }

 class Btech:public Student{
     public:

    int mark;
    void initial()
    {
        cout<<"enter name:";
         cin>>name;
         cout<<"enter reg";
         cin>>reg_no;
         cout<<"enter age:";
         cin>>age;
         cout<<"enter mark:";
         cin>>mark;


    }

    void sort(int);

   void display()
    {
        cout<<"\n"<<name<<"\t\t"<<reg_no<<"\t\t"<<age<<"\t\t"<<mark<<endl;

    }

 };

 static Btech obs[10];

 void Btech:: sort(int n)
 {
     Btech temp;
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
         {
             if(obs[i].mark>obs[j].mark)
             {
                 temp=obs[i];
                 obs[i]=obs[j];
                 obs[j]=temp;
             }
         }

     }

 }
int main()
{
    int ch;
    cout<<"1.mtech"<<endl<<"2.btech"<<endl;
    cin>>ch;
    Student *s1;
    Mtech m;
    int n;
    switch(ch)
    {

    case 1:cout<<"enter the number of students: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"\neneter the details of "<<i+1<<"student";
        obj[i].input();
    }
    s1=new Mtech();
    s1->sort(n);
    cout<<"\n"<<"name"<<"\t\t"<<"reg_no"<<"\t\t"<<"age"<<"\t\t"<<"gpa"<<endl;
   
    for(int i=0;i<n;i++)

{

obj[i].output();
}
break;

case 2: cout<<"enter the number of students: ";
    cin>>n;
Student *bptr;
Btech b1[10];

for(int i=0;i<n;i++)
{
    obs[i].initial();

}
bptr=new Btech();
bptr->sort(n);
for(int i=0;i<n;i++)
{
    obs[i].display();
}
break;


    }



        
    return 0;




}