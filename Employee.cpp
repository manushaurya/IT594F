#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class Employee{
private:
    int Emp_Id,Emp_Salary;
    char Emp_name[20],Emp_Address[20];
public:
    void get_data()
    {
        fflush(stdin);
        cout<<"Employee Name:";
        cin.getline(Emp_name,20);
        cout<<"Employee ID:";
        cin>>Emp_Id;
        cout<<"Employee Salary:";
        cin>>Emp_Salary;
        cout<<"Employee Address:";
        fflush(stdin);
        cin.getline(Emp_Address,20);
    }
    void display()
    {
        cout<<"Employee Details are:"<<endl<<"Employee Name: "<<Emp_name<<endl<<"Employee ID: "<<Emp_Id<<endl<<"Employee Salary: "<<Emp_Salary<<endl<<"Employee Address: "<<Emp_Address<<endl;

    }

};

int main()
{
    Employee e[5];
    for(int i=0;i<5;i++)
    {
        cout<<"------------------------------"<<endl;
        cout<<"Employee"<<i+1<<" details: "<<endl;
        e[i].get_data();
       cout<<endl<<endl;
       cout<<"Employee"<<i+1<<" details are: "<<endl;
        e[i].display();
    }
    getch();
    return 0;

}
