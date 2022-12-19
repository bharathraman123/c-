#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
    string name;
    int reg_no;

    virtual void sort(int)=0;


};

class Btech:public Student
{
    public:
    int mark;

    void input()
    {
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter register number";
        cin>>reg_no;
        cout<<"enter mark: ";
        cin>>mark;

    }

    void sort(int);

    void display()
    {
        cout<<name<<"\t\t"<<reg_no<<"\t\t"<<mark<<endl;
    }

};

static Btech obj[10];
void Btech::sort(int n)
{
    Btech temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(obj[i].mark>obj[j].mark)
            {
                temp=obj[i];
                obj[i]=obj[j];
                obj[j]=temp;
            }
        }
    }
}

int main()
{
    int n;
    Student *bptr;
    cout<<"enter the number of students: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        obj[i].input();
    }
    bptr=new Btech();
    bptr->sort(n);

    for(int i=0;i<n;i++)
    {
        obj[i].display();
    }


}

/*#include<iostream>
using namespace std;
 class one
 {
     private:
     int x,y;

     public:
    
    void input()
    {
        cout<<"enter the x and y: ";
        cin>>x>>y;
    }
    friend one operator +(one,one);

    void display()
    {
        cout<<"x: "<<x<<endl;
        cout<<"y: "<<y<<endl;
    }

 };
 one operator +(one obj1,one obj2)
 {
     one temp;
     temp.x=obj1.x+obj2.x;
     temp.y=obj1.y+obj2.y;
     return temp;
 }

 int main()
 {
     one ob1,ob2,ob3;
     ob1.input();
     ob2.input();

     ob3=ob1+ob2;

     ob3.display();

     
 }*/