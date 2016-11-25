#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

class Book{
private:
    int book_no,n;
    char book_title[20];
    float price;
    void total_cost(int n)
    {
        cout<<"Total price is:"<<n*price<<endl;
    }
public:
    void input()
    {
        cout<<"Enter the book no.: "<<endl;
        cin>>book_no;
        fflush(stdin);
        cout<<"Enter the book title: "<<endl;
        cin.getline(book_title,20);
        cout<<"Enter the book price: "<<endl;
        cin>>price;
    }
    void purchase()
    {
        cout<<"Enter the no. of copies to be purchased: "<<endl;
        cin>>n;
        total_cost(n);
    }
};
int main(){
Book b;
b.input();
b.purchase();
getch();
return 0;
}
