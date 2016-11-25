#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
void area(float);
void area(int,int);
void area(float,float);
class Area{
private:
    float r,l,b;
    float base,height;
public:
    void area(float r)
    {
        cout<<"Area of circle is: "<<3.14*r*r<<endl;
    }
    void area(int l,int b)
    {
        cout<<"Area of rectangle is: "<<l*b<<endl;
    }
    void area(float base,float height)
    {
        cout<<"Area of triangle is: "<<0.5*base*height<<endl;
    }

};
int main()
{
    Area a;
    int l,b;
    float r,height,base;
    cout<<"Enter the dimensions: "<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"Enter radius: ";
    cin>>r;
    a.area(r);
    cout<<"------------------------------------"<<endl;
    cout<<"Enter length and breadth: "<<endl;
    cin>>l>>b;
    a.area(l,b);
    cout<<"------------------------------------"<<endl;
    cout<<"Enter height and base: "<<endl;
    cin>>height>>base;
    a.area(height,base);
    getch();
    return 0;
}
