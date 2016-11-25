#include <iostream>
#include <stdlib.h>
using namespace std;

int fibonacci(int n)
{
    if(n==0||n==1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
class Fibonacci
{
private:
    int c,n;
    int a=0,b=1;
public:
    Fibonacci(int x)
    {
        cout<<"Enter the value of n:";
        cin>>n;
        cout<<a<<" ";
        cout<<b<<" ";
        c=a+b;
        while(c<=n)
        {
            cout<<c<<" ";
            a=b;
            b=c;
            c=a+b;
        }
    }
public:
    void display()
    {
        cout<<"The resultant Fibonacci series is :";
    }
};
int main()
{
    int n;

    Fibonacci fibo(5);
    fibo.display();
    return 0;
}
