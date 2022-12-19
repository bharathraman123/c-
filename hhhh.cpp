#include<iostream>
using namespace std;
 class one
 {
     private:
     int x;
     int y;
   

    public:
      void initial()
      {
          cout<<"enter x: ";
          cin>>x;
          cout<<"enter y:  ";
          cin>>y;
      }

    friend one operator +(one,one);

    void display()
    {
        cout<<"x is : "<<x<<endl;
        cout<<"y is : "<<y<<endl;
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
     ob1.initial();
     ob2.initial();

     ob3=ob1+ob2;
    
    ob3.display();
 }