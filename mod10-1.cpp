#include <iostream>
using namespace std;

long long factorial(int n)
{
    //factorial of 0 or 1 is 1
    if(n == 0 || n == 1)
    return 1;
    else
    //recursion; multiply n with factorial of (n-1)
    return n * factorial(n-1);
}

int main()
{
    int num;
    cout << "Enter a positive number: ";
    cin >> num;

    //check if num input is negative 
    if(num < 0)
    cout << "Input was a negative number, start again.";
    else
    //call factorial function and print output
    cout << "Factorial of " << num << " is " << factorial(num);

    return 0;
}