/*Swapping using template*/
#include <iostream>
using namespace std;
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


int main()
{
   int a,b;
   cout<<"---------Swapping using template----------"<<endl;
   cout<<"Before swapping: "<<endl;
   cout<<" Enter a: ";
   cin>>a;
   cout<<" Enter b: ";
   cin>>b;
   cout<<"After swapping: "<<endl;
   swapp(a,b);
return 0;
}
