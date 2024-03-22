#include <iostream>

using namespace std;

int factorialNumbers(int num);

int main()
{
    int startingNum;
    int factorialFactor;
    cout << "How many numbers would you like displayed?" << endl;
    cin >> startingNum;
    cout << factorialNumbers(startingNum) << endl;
}
// this method takes the nums and returns them to the terminal
int factorialNumbers(int num)
{
    cout << num << endl;
    if(num > 0)
    {
       num *= factorialNumbers(num -1);
    }
    else
    {
        return num;
    }
}