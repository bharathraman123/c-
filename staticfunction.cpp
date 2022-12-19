#include<iostream>
using namespace std;
class one
{
    private:
    static int arr[20];
    static int n;
    static float avg;

    public:

    void input()
    {
        
        cout<<"enter the array limit: ";
        cin>>n;
        cout<<"enter the array elements: ";
        for(int i=0;i<=n;i++)
        {
            cin>>arr[i];
        }
    }

    static void average()
    {
        int sum=0;
        for(int i;i<n;i++)
        {
            sum=sum+arr[i];
        }
        avg=sum/n;
    }

    void multiplier()
    {
        int k;
        cout<<"enter the multiplier: ";
        cin>>k;
        for(int i=0;i<n;i++)
        {
            arr[i]=arr[i]*k;
            cout<<arr[i]<<endl;

        }
    }

    void order()
    {
        int i,j,temp;
        for(i=1;i<n;i++)
        {
            for(j=0;j<n-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        cout<<"sorted array:"<<endl;
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }

    }
};
int main()
{
    one obj1,obj2,obj3;
    obj1.input();
    obj1.average();
    obj2.multiplier();
    obj1.average();
    obj3.order();


}