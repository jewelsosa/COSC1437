#include <iostream>
using namespace std;

int main()
{
    //declare variable 
    double celsiusNum;
    double fahrenNum;
    double fahrenheit;
    //get celsius # from user 
    cout << "What celsius temp would you like to convert to?";
    cin >> celsiusNum;
    //convert to fahrenheit
    fahrenheit = (celsiusNum * (9/5.)) + 32;
    //output to console new value
    cout << celsiusNum << " is " << fahrenNum << " in fahrenheit. " << endl;
    return 0;
}