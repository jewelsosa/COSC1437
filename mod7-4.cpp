#include <iostream>
using namespace std;

int main ()
{
    //setting the counter to 0 
    int counter = 0;

    //the loop should execute as long as it's <= 10
    
    do
    {
        //current num
        cout << "Current num is " << counter << endl;
        //num times two
        cout << "Times two is " << counter *2 << endl;
        //num times ten
        cout << "Times ten is " << counter *10 << endl;

        Cout << endl;

        //increase counter 
        counter++;
    } 
    while (counter <= 10);
    return 0;
}