/*Call by value*/
#include <iostream>
using namespace std;
double average(int []);
double average(int x[5])
{
    double av;
    int sum=0;
    for(int i=0;i<5;i++)
    sum=sum+x[i];
    av=(double)sum/5;
    return av;
}
int main()
{
    int x[5];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<5;i++)
    cin>>x[i];
    double avg=average(x);
    cout<<"Avg. of 5 no. is "<<avg<<endl;
    return 0;
}