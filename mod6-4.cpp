#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string employName = "Micheal Jackson";

    //employee data, these are examples of annual salaries and performance ratings
    double annualSal = 10000.0; //micheal's net worth was actually 500 million but im scared of that number
    int performanceRat = 10; //random num

    double bonus = 0.0;
    //calculating the bonus using switch cases 
    switch (performanceRat) 
    {
        case 1:
        bonus = 0.25 * annualSal;
        break;

        case 2:
        bonus = 0.15 * annualSal;
        break;

        case 3:
        bonus = 0.10 * annualSal;
        break;

        case 4:
        bonus = 0.0; //no bonus :(
        break;

        //default if none of the switch cases are executed
        default:
        cout << "invalid rating" << endl;
        return 1;
    }
    //outputting micheal jackson's fake data
    cout << "Employee's Name: " << employName << endl;
    cout << "Yearly Salary : $" << annualSal << endl;
    cout << "Preformance rating: " << performanceRat << endl;
    cout << employName << "'s BONUS is = $" << bonus << endl;


    return 0;
}