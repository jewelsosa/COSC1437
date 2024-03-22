//for mod 7-1 i used a for loop so im redoing this one with a controlled while loop
#include <iostream>
using namespace std;

int main ()
{
    //intialize the counter variable to 0
    int counter = 0;

    //this loop continues until it reaches 10
    while (counter <= 10)
    {
        //current  num
        cout << "Current Num is " << counter << endl;
        //num times 2
        cout << "Times two is " << counter * 2<< endl;
        //num times ten
        cout << "Times ten is " << counter *10 << endl;

        cout << endl;
        //increasing the count
        counter++;
    }
    return 0;

}