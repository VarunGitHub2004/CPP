//Write a program to display information of student (name ,age,course,year) by using class
#include<iostream>
#include<string.h>
using namespace std;
class Student{
string  name;
    int age;
    string course;
    string year;
    public:
    void get_Data()
    {
        cout<<"Enter the name of student\n";
        cin>>name;
        cout<<"Enter the age of student\n";
        cin>>age;
        cout<<"Enter the course of student\n";
        cin>>course;
        cout<<"Enter the year in which student is studying\n";
        cin>>year;
    }

    void display()
    {
        cout<<"\nDisplaying the information of student\n\n";
         cout<<"The name of student is "<<name<<endl;
         cout<<"The age of student is "<<age<<endl;
         cout<<"The course of student is "<<course<<endl;
         cout<<"The student is studying in year "<<year<<endl;
    }
};
int main()
{
  Student S1;
  S1.get_Data();
  S1.display();
return 0;
}
