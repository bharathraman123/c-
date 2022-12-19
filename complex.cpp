#include<iostream>
using namespace std;

class febin
{
    public:
    int real,img;

    void input()
    {
        cout<<"entr the real part: ";
        cin>>real;
        cout<<"enter the imaginary part: ";
        cin>>img;
    }

    febin operator +(febin obj)
    {
        febin temp;
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
    }
};

int main()
{
    febin ob1,ob2,ob3;
    ob1.input();
    ob2.input();
    ob3=ob1+ob2;

cout<<ob3.real<<"+"<<"i"<<ob3.img;
    return 0;
}