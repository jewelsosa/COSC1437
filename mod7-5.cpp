#include <iostream>
using namespace std;

int main ()
{
    //loop for each row, i<5 is the amt of rows 
    for(int i = 0; i<5; ++i)
    {
        //printing asterisks 1st, 3rd and 5th rows
        if(i == 0 || i == 2 || i == 4)
        {
            cout << "***";
        }
        else 
        {
            //asterisks for the 1st column
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}