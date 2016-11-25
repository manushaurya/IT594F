#include <iostream>
#include <malloc.h>

using namespace std;

void accept(int *);
void del(int *);
void display(int *);

int i,ele,n,x,*k,pos;

int main()
{
    cout<<"Enter the No.of Elements to be entered"<<endl;
    cin>>n;
    int *ptr=(int*)malloc(n*sizeof(int));
    accept(ptr);
    del(ptr);
    display(ptr);
    return 0;
}
    void accept(int *p)
    {
        k=p;
        x=n;
        cout<<"Enter the array elements"<<endl;
        for(i=0;i<x;i++)
            cin>>*(k++);
        cout<<"The entered array elements are: "<<endl;
        k=p;
        for(i=0;i<x;i++)
            cout<<*(k++)<<" ";

}
 void del(int *p)
 {

     cout<<endl<<"Enter the position to which it has to deleted:"<<endl;
     cin>>pos;
     for(i=0;i<pos;i++)
        p++;
        p--;
 for(i=pos-1;i<x;i++)
  {
      *p=*(p+1);

 p++;
  }
 x--;
 }
void display(int *p)
{
    k=p;
    cout<<"Array after deletion is:"<<endl;
    for(i=0;i<x;i++)
        cout<<*(k++)<<" ";
}

