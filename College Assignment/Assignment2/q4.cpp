//Write a program to find  a number is armstrong or not
#include<iostream>
using namespace std;
int isArmstrong(int n)
{
    int temp=n;
        int sum=0;
        int r;
       while(temp>0)
{
     r=temp%10;
   sum=sum+r*r*r;
     temp/=10;
}
if(sum==n)
return 1;
else
return 0;

}
int main()
{
    int  num;
    cout<<"Enter a number.\n";
    cin>>num;
if(isArmstrong(num))
     cout<<num<<" is a Armstrong number";
else
     cout<<num<<" is not a Armstrong number";
return 0;
}
