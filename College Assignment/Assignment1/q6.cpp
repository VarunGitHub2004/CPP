//Write a program to display information of employee(Employee-id,Employee-name,Employee Salary) using array of objects
//Here no of employee should be 3
#include<iostream>
#include<string.h>
using namespace std;
    static  int count=0;

class Employee{
  int empId;
  char empName[30];
int salary;
public:
void get_Data()
{
    count++;
    cout<<"\nEnter detail for employee no "<<count<<endl;
     
 
        cout<<"Enter the ID of employee\n";
cin>>empId;
  cout<<"Enter the name of Employee\n";
      cin>>empName;
       cout<<"Enter the salary of Employee\n";
        cin>>salary;
}
void show_Data()
{

        cout<<"\nDisplaying the information for employee no "<<count<<endl;
         cout<<"The id of Employee is "<<empId<<endl;
         cout<<"The name of employee is "<<empName<<endl;
         cout<<"The salary of employee is "<<salary<<endl;
}
};
int main()
{
   Employee  E1[3];
   for(int i=0;i<3;i++)
   {
   E1[i].get_Data();
   E1[i].show_Data();
   }
return 0;
}
