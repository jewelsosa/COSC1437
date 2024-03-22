#include <iostream>
using namespace std;

int main ()
{
    char userInput; 
    //setting counter for left and right handed people at 0
    int leftCount = 0, rightCount = 0;
    
    //loop that continues until user exits using 'x'
    do
    {
        cout << "Enter an 'L' if you're left-handed, an 'R' if you're right-handed or X to quit:" ;
        cin >> userInput;

        //increment left or right handed people based on user input
        if(userInput == 'L')
        {
            leftCount++;
        }
        else if (userInput == 'R')
        {
            rightCount++;
        }
        //exit
    } while (userInput != 'X');

    //output totals
    cout << "Number of Left-Handed students : " << leftCount << endl;
    cout << "Number of Right-Handed students : " << rightCount << endl;

    return 0;

}