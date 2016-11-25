/*multi-level*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class basic_details
{
private:
    char name_pat[20],sex[2];
    int age;
public:
    void getdetails1()
    {
        cout<<"Enter Name:";
        cin.getline(name_pat,20);
        cout<<"Enter Sex(M/F):";
        cin.getline(sex,2);
        cout<<"Enter Age:";
        cin>>age;
    }
    void printdetails1()
    {
        cout<<"Name of the patient:"<<name_pat<<endl;
        cout<<"Sex:"<<sex<<endl;
        cout<<"Age:"<<age<<endl;
    }


};
/*-------------------------------*/
class extra_details:public basic_details
{
private:
    int ward_no,bed_no;
    char nature[20];
public :
    void getdetails2()
    {
        cout<<"Enter Ward No.:";
        cin>>ward_no;
        cout<<"Enter Bed No.:";
        cin>>bed_no;
        cout<<"Enter nature of illness:";
        fflush(stdin);
        cin.getline(nature,20);
    }
    void printdetails2()
    {
        cout<<"Ward Number:"<<ward_no<<endl;
        cout<<"Bed Number"<<bed_no<<endl;
        cout<<"Nature of illness:"<<nature<<endl;
    }

};
/*------------------------------*/
class derived_datils:public extra_details
{
private:
    char date[20];
public:
    void getdetails3()
    {
        cout<<"Enter date:";
        cin.getline(date,20);
    }
    void printdetails3()
    {
        cout<<"Date:"<<date<<endl;
    }

};

int main()
{
    derived_datils ob;
    cout<<"------------Patient Admission-------------"<<endl;
    cout<<"Enter the patient details:"<<endl;
    ob.getdetails1();
    ob.getdetails2();
    ob.getdetails3();
    cout<<endl;
    cout<<"Patient details:"<<endl;
    ob.printdetails1();
    ob.printdetails2();
    ob.printdetails3();

    return 0;
}


