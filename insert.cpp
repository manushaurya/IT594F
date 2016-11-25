#include <iostream>
#include <malloc.h>

using namespace std;

void accept(int *);
void insert(int *);
void display(int *);
int i,ele,n,x,*k,pos;
int main()
{
    cout<<"Enter the No.of Elements to be entered:"<<endl;
    cin>>n;
    int *ptr=(int*)malloc(n*sizeof(int));
    accept(ptr);
    insert(ptr);
    display(ptr);
    return 0;
}
    void accept(int *p)
    {
        k=p;
        x=n;
        cout<<"Enter the array elements:"<<endl;
        for(i=0;i<x;i++)
            cin>>*(k++);
        cout<<"The entered array elements are:"<<endl;
        k=p;
        for(i=0;i<x;i++)
            cout<<*(k++)<<" ";

}
 void insert(int *p)
 {
     k=p;
     cout<<endl<<"Enter the element to be inserted:"<<endl;
     cin>>ele;
     cout<<endl<<"Enter the position to which it has to inserted:"<<endl;
     cin>>pos;
     for(i=0;i<x;i++)
        k++;

    for(i=x;i>=pos;i--)
    {
        *(k+1)=*k;
        k--;
    }
    k++;
    *(k)=ele;
    x++;
    }
void display(int *p)
{
    k=p;
    cout<<"New array after insertion is:"<<endl;
    for(i=0;i<x;i++)
        cout<<*(k++)<<" ";
}
