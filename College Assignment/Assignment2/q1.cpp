// Write a program to check a number is prime or not

#include <iostream>
using namespace std;
int isPrime(int num)
{
    if(num <2)
      return 0;

    if (num == 2)
        return 1;
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
                return 0;
            else
                continue;
        }
        return 1;
    }
}
int main()
{
    int num;
    cout << "Enter the number to check it is prime number or not\n\n";
    cin >> num;
    int isPrimeNo = isPrime(num);
    if (isPrimeNo)
        cout << num << " is a prime no";
    else
        cout << num << " is not a prime no";
    return 0;
}
