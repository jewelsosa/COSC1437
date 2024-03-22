#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string employName = "drake" ;

    //employee data, they are examples of transactional data
    double transDollarVal = 1500.0;
    int numofTrans = 50, numShifts = 5;

    //productivity score
    double prodScore = (transDollarVal/numofTrans) / numShifts;

    //calculate bonus using else if statements (i wish i got a bonus)
    int bonus = 0;
    if (prodScore <= 30)
    {
        bonus = 50;
    }
    else if (prodScore >= 31 && prodScore<= 69)
    {
        bonus = 75;
    }
    else if (prodScore>=70 && prodScore <= 199)
    {
        bonus =100;
    }
    else 
    {
        bonus = 200;
    }

    // outputting employee data
     cout << "Emplyee name is: " << employName << endl;
     cout << employName << "'s productvity bonus is: $" << bonus << endl;
    return 0;
}