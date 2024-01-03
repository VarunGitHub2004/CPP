//Write a program to reverse a number
#include<iostream>
using namespace std;
int findReverse(int n)
{
        int sum=0;
        int r;
       while(n>0)
{
     r=n%10;
   sum=sum*10+r;
     n/=10;
}
return sum;
}
int main()
{
    int  num;
    cout<<"Enter the number of which you want to get reverse\n";
    cin>>num;
    int reverse=findReverse(num);
    cout<<"Ther reverse of "<<num <<" is "<<reverse;
return 0;
}
