/*Using inline function*/
#include <iostream>
using namespace std;
inline void palindrome(int);
inline void palindrome(int n)
{
    int i=0,c;
    c=n;
    while(n>0)
    {
        i=i*10+n%10;
        n/=10;
    }
    if(i==c)
    cout<<"No. is palindrome !!!"<<endl;
    else
    cout<<"No. is not palindrome !!!"<<endl;
}
int main()
{
    int n;
    cout<<"Enter a no."<<endl;
    cin>>n;
    palindrome(n);
    return 0;
}
