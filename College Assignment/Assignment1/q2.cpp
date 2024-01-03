//Write a program to find sum of all elements of an array?
#include<iostream>
using namespace std;
int main()
{
   int arr[5]={1,2,3,4,5},sum=0;
   cout<<"Displaying sum of all elements of array\n";
   for(int i=0;i<5;i++)
       sum+=arr[i];
    cout<<sum;
return 0;
}
