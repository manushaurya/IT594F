/*Exception with function*/
#include <iostream>
using namespace std;
void res(float x,float y)
{
    float result=x/y;
    if(y!=0)
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
}
int main()
{
    float x,y;
    cout<<"Enter numerator: ";
    cin>>x;
    cout<<"Enter denominator: ";
    cin>>y;
    res(x,y);
    return 0;
}
