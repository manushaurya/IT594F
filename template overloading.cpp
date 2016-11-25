/*Swapping using template overloading*/
#include <iostream>
using namespace std;
class Swappp
    {
    public:
        template <class T>
        void swapp(T a,T b)
           {
              T t;
              t=a;
              a=b;
              b=t;
              cout<<" a= "<<a<<endl;
              cout<<" b= "<<b<<endl;
           }
void swapp(int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    cout<<" a= "<<a<<endl;
    cout<<" b= "<<b<<endl;

}
void swapp(float c,float d)
{
    float t;
    t=c;
    c=d;
    d=t;
    cout<<" c= "<<c<<endl;
    cout<<" d= "<<d<<endl;

}};



int main()
{
   int a,b;
   float c,d;
   Swappp ob;
   cout<<"---------Swapping using template----------"<<endl;
   cout<<"Before swapping(integer): "<<endl;
   cout<<" Enter a: ";
   cin>>a;
   cout<<" Enter b: ";
   cin>>b;
   cout<<"After swapping: "<<endl;
   ob.swapp(a,b);
   cout<<"-----------------------------------------"<<endl;
   cout<<"Before swapping(float): "<<endl;
   cout<<" Enter c: ";
   cin>>c;
   cout<<" Enter d: ";
   cin>>d;
   cout<<"After swapping: "<<endl;
   ob.swapp(c,d);
return 0;
}
