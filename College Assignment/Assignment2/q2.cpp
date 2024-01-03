//Write a program to find largest number among three numbers;
#include<iostream>
using namespace std;
int main()
{
   int num1, num2 ,num3;
   cout<<"Enter the three numbers\n";
   cin>>num1>>num2>>num3;
   if(num1>num2 && num1>num3)
     cout<<num1<<" is greatest among all\n";
    else if(num2>num3)
     cout<<num2<<" is greatest among all\n";
  else
     cout<<num3<<" is greatest among all\n";

return 0;
}
