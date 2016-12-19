/*Using call by address*/
#include <iostream>
using namespace std;
void palindrome(int *);
void palindrome(int *n)
{
    int i=0,c;
    c=(*n);
    while((*n)>0)
    {
        i=i*10+(*n)%10;
        (*n)=(*n)/10;
    }
    if(i==c)
    {
        cout<<"No. is palindrome !!!"<<endl;
    }
    else
    cout<<"No. is not palindrome !!!"<<endl;
}
int main()
{
    int n;
    cout<<"-----------Palindrome Test-------------"<<endl<<"Enter a no. : "<<endl;
    cin>>n;
    palindrome(&n);
    return 0;
}
