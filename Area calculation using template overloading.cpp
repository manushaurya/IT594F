/*Area calculation using template overloading*/
#include <iostream>
using namespace std;
class Area
{
public:
    template <class T>
    void circle(T r)
    {
        cout<<"Area of the circle is :"<<3.14*r*r<<endl;
    }
    template <class T, class P>
    void rectangle(T l, P b)
    {
        cout<<"Area of the rectangle is :"<<l*b<<endl;
    }
};
int main()
{

    int r,l,b;
    Area ob;
    cout<<"Enter the radius: ";
    cin>>r;
    ob.circle(r);
    cout<<"--------------------------------"<<endl;
    cout<<"Enter the length and breadth: ";
    cin>>l>>b;
    ob.rectangle(l,b);
    return 0;
}
