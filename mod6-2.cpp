#include <iostream>
using namespace std;

int main ()
{
    int num1 = -50, num2 = 53, num3 = 78;

    int largestNum = num1;
    if(num2 > largestNum)
    {
        largestNum = num2;
    }

    if(num3 > largestNum)
    {
        largestNum = num3;
    }

    //smallest num out of three
    int smallestNum = num1;
    if(num2 < smallestNum)
    {
        smallestNum = num2;
    }
    if(num3 < smallestNum)
    {
        smallestNum = num3;
    }
    // outputting data :3
    cout << "The largest number is - " << largestNum << endl;
    cout << "The smallest number is - " << smallestNum << endl;

    return 0;
}