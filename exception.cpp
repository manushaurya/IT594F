/*Exception without function*/
#include <iostream>
using namespace std;
int main()
{
    float num,den;
    cout<<"Enter the numerator: ";
    cin>>num;
    cout<<"Enter the denominator: ";
    cin>>den;
    float result=num/den;
    if(den!=0)
    {
        cout<<"Result: "<<result<<endl;
    }
    else
    {
      try
      {
          throw result;
      }
      catch(float result)
      {
          cout<<"Can't divide by zero!!!"<<endl;
      }
    }
    return 0;
}
