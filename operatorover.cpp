#include<iostream>
#include<cmath>
using namespace std;
 class shape
 {
     public:
      virtual void area()=0;
      virtual void perimeter()=0;
     
 };

 class triangle:public shape{

     public:
     int a,b,c,s;

     void area()
     {
         cout<<"enter the 3 sides: ";
         cin>>a>>b>>c;
         s=(a+b+c)/2;
         cout<<"area is: "<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;

     }

     void perimeter()
     {
         cout<<"perimeter is: "<<a+b+c<<endl;
     }

 };

 class reactangle:public shape
 {
     public:
     int l,b;

     void area()
     {

     cout<<"enetr length and breadth: ";
     cin>>l>>b;
     cout<<"area is :  "<<l*b;

     }

     void perimeter()
     {
         cout<<"perimetr is :  "<<2*(l+b);
     }

 };

 class circle:public shape{
     public:
     int r;
      void area()
      {
          cout<<"enter the radius: ";
          cin>>r;

          cout<<"area is: "<<3.14*r*r<<endl;
      }

      void perimeter()
      {
          cout<<"circumference is : "<<2*3.14*r;
      }
 };

 class square:public shape{
     public:
     int s;

     void area()
     {
         cout<<"enter the side: ";
         cin>>s;

         cout<<"area is :  "<<s*s;

     }

     void perimeter()
     {
         cout<<"perimeter is : "<<4*s;
     }
 };

 int main()
 {
     shape *bptr;
     triangle tri;
     reactangle rect;
     circle ci;
     square sq;
     int ch,i;
     do{

     cout<<"1.triangle"<<endl<<"2.revtangle"<<endl<<"3.circle"<<endl<<"4.square"<<endl<<"enter chocie"<<endl;
     cin>>ch;

     switch(ch)
     {
         case 1: cout<<"........traingle........"<<endl;
         bptr=&tri;
         bptr->area();
         bptr->perimeter();
         break;

         case 2: cout<<".......rectangle........."<<endl;
         bptr=&rect;
         bptr->area();
         bptr->perimeter();
         break;

         case 3: cout<<".......circle........."<<endl;
         bptr=&ci;
         bptr->area();
         bptr->perimeter();
         break;

         case 4: cout<<".......square........."<<endl;
         bptr=&sq;
         bptr->area();
         bptr->perimeter();
         break;

         default: cout<<"enter a valid choice";
     
     }
     cout<<"enter 1 to continue: ";
     cin>>i;

         

     }while(i==1);
     return 0;



 }