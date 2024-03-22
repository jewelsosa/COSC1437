#include <iostream>
using namespace std;

int main()
{
const int numBatAvg = 8;
//an array to store batting avgs
double averages[numBatAvg];
double sum = 0; //store sum of avgs

double minAvg, maxAvg;

//for loop that gathers user input for batting avgs, sum should be outputted
for(int i = 0; i < numBatAvg; ++i)
{
    cout << "Enter a batting average";
    cin >> averages[i];
    //add entered avg to the sum
    sum += averages[i];

    //update min and max
    if(i == 0 || averages[i] < minAvg)
    {
        minAvg = averages[i];
    }
    if(i == 0 || averages[i] > maxAvg)
    {
        maxAvg = averages[i];
    }
}

//avg OF batting avgs
double avgAvg = sum /numBatAvg;
//output avgs using a loop
for(int i = 0; i < numBatAvg; ++i)
{
    cout << "averages[" << i << "] is " << averages[i] << endl;
}

//output min, max and avg of batting avgs
cout << "Minimum Batting average is " << minAvg << endl;
cout << "Maximum batting average is " << maxAvg << endl;
cout << "Average batting average is " << avgAvg << endl;

return 0;

    
}