#include <iostream>
#include <malloc.h>

using namespace std;

void accept(int *);
void bubble(int *);
void display(int *);
int i,ele,n,x,*k,pos;
int main()
{
    cout<<"Enter the No.of Elements to be entered:"<<endl;
    cin>>n;
    int *ptr=(int*)malloc(n*sizeof(int));
    accept(ptr);
    bubble(ptr);
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
 void bubble(int *p)
 {
     k=p;
     int i,j,temp;
    for(i=0;i<x;i++)
       {   k=p+1;
           for(j=i+1;j<x;j++)
                {
                    if(*(p)>*(k))
                    {
                        temp=*(p);
                        *(p)=*(k);
                        *(k)=temp;
                    }
                 k++;
                }
             p++;
       }

 }
void display(int *p)
{
    k=p;
    cout<<endl<<"New array after sorting is:"<<endl;
    for(i=0;i<x;i++)
        cout<<*(k++)<<" ";
}




