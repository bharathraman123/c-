#include<iostream>
using namespace std;

class mark
{
    private:
    int intmark;
    int extmark;

    public:

    mark()
    {
        intmark=0;
        extmark=0;
    }

    mark(int im,int em)
    {
        intmark=im;
        extmark=em;
    }

    mark operator+(mark obj2)
    {
        mark temp1;
        temp1.intmark=intmark+obj2.intmark;
        temp1.extmark=extmark+obj2.extmark;
        return temp1;
    }

    mark operator -(mark obj2);

    void display()
    {
        cout<<"internal mark:  "<<intmark<<endl;
        cout<<"external mark:  "<<extmark<<endl;
    }
};

mark mark :: operator-(mark obj2)
{
    mark temp2;
    temp2.intmark=intmark-obj2.intmark;
    temp2.extmark=extmark-obj2.extmark;
    return temp2;
}

int main()
{
    mark ob3,ob4;
     int a,a1,b,b1;
     cout<<"enter a: ";
     cin>>a;
     cout<<"enter b: ";
     cin>>b;
     cout<<"enter a1: ";
     cin>>a1;
     cout<<"enter b1: ";
     cin>>b1;

     mark ob1(a,b);
     mark ob2(a1,b1);

     ob3=ob1+ob2;
     ob4=ob1-ob2;

     ob3.display();
     ob4.display();

}