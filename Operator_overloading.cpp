/*operator overloading*/
#include <iostream>
using namespace std;
class operatorOverload{
private:
    int a;
public:
    void getdata()
    {
      cin>>a;
    }
    operatorOverload operator +(operatorOverload ob)
    {
        operatorOverload t;
        t.a=a+ob.a;
        return t;
    }
    operatorOverload operator -(operatorOverload ob)
    {
        operatorOverload t;
        t.a=a-ob.a;
        return t;
    }
    operatorOverload operator *(operatorOverload ob)
    {
        operatorOverload t;
        t.a=a*ob.a;
        return t;
    }
    operatorOverload operator /(operatorOverload ob)
    {
        operatorOverload t;
        t.a=a/ob.a;
        return t;
    }
    void display()
    {
        cout<<a<<endl;
    }

};

int main()
{
    operatorOverload ob1;
    operatorOverload ob2;
    operatorOverload ob3;
    operatorOverload ob4;
    operatorOverload ob5;
    operatorOverload ob6;
    cout<<"Enter two inputs:"<<endl;
    ob1.getdata();
    ob2.getdata();
    ob3=ob1+ob2;
    cout<<"Sum=";
    ob3.display();
    ob4=ob1-ob2;
    cout<<"Difference=";
    ob4.display();
    ob5=ob1*ob2;
    cout<<"Multiplication=";
    ob5.display();
    ob6=ob1/ob2;
    cout<<"Division=";
    ob6.display();
    return 0;
}
