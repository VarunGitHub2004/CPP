//Write a program to display information of book (title ,author_name,price) by using scope resolution operator
#include<iostream>
#include<string.h>
using namespace std;
class Book{
    int price;
    char author_name[20];
char  title[30];
    public:
    void get_Data();
    void display();

   
};

 void Book:: display()
    {

        cout<<"\nDisplaying the information of book\n\n";
         cout<<"The title of book is "<<title<<endl;
         cout<<"The price of student is "<<price<<endl;
         cout<<"The name of author of this book is "<<author_name<<endl;
    }
  void Book:: get_Data()
    {
    
        cout<<"Enter the title of book\n";
      cin.getline(title,30);
 
        cout<<"Enter the name of author of book\n";
      cin.getline(author_name,30);
       cout<<"Enter the price of book\n";
        cin>>price;
    }
int main()
{
  Book B1;
  B1.get_Data();
  B1.display();
return 0;
}
