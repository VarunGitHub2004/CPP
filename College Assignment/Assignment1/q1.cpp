//Write a program to check a number is even or odd
#include<iostream>
using namespace std;
int main()
{
int num;
cout<<"Enter number to check it is even or odd\n\n";
cin>>num;
if(num%2==0)
  cout<<num<<" is a even number.";
else 
  cout<<num<<" is a odd number.";
return 0;
}
