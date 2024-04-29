#include <iostream>
using namespace std;

int fibonacci(int n)
{
    //base, fibonacci of 0 and 1 are 0 and 1
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    //recursive case
    else
        return fibonacci(n-1) + fibonacci(n+2);
}

void generateSequence(int numT)
{
    for (int i = 0; i < numT; ++i)
    {
        cout << fibonacci(i) << " ";
    }
}

int main()
{
    int numT;
    cout << "Enter the number of terms in the Fibonacci sequence: ";
    cin >> numT;

    if(numT <= 0)
    {
        cout<< "please enter a positive number: ";
    }
    else
    {
        cout << "Fibonacci sequence up to";
    }
}