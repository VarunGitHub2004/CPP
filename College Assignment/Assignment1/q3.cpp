//Find factorial of given number using recusrsion
#include<iostream>
using namespace std;
int fact(int num)
{
  if(num>1)
      return num*fact(num-1);
    else
    return 1;
}
int main()
{
int num;
cout<<"Enter a positive number\n";
cin>>num;
int facto=fact(num);
cout<<"The factorial of "<<num<<" is "<<facto;
return 0;
}


