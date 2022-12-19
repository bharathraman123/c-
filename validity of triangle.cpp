#include<iostream>
#include<cmath>
using namespace std;
class triangle
{
    private:
    int a,b,c;

    public:

    void input()
    {
        cout<<"enter the 3 sides ";
        cin>>a>>b>>c;
    }

    void validity()
    {
        if (a+b>c&&b+c>a&&a+c>b)
        {
            cout<<"valid triangle";
        }
        else
        cout<<"invalid triangle";


    }

    void display()
    {
        cout<<"the sides are"<<a<<endl<<b<<endl<<c<<endl;
    }
    
    void area()
    {
        float s,area;
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Area is :  "<<area<<"  sq units";

    }


};

int main()
{
    triangle obj;
    obj.input();
    obj.validity();
    obj.display();
    obj.area();
}