/*Call by address*/
#include <iostream>
using namespace std;
void average(int *);
int main()
{
    int a[5],i;
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<5;i++)
    cin>>a[i];
    average(a);
    return 0;
}
void average(int *a)
{
    double avg;
    int sum=0;
    for(int i=0;i<5;i++)
    sum=sum+a[i];
    avg=(double)sum/5;
    cout<<"The average is : "<<avg<<endl;
}
