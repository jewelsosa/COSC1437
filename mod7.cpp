#include <iostream>
using namespace std;
// this one was probably my favorite one to do, didnt realise how easy it was :D
int main ()
{

    //loop for numbers 0-10, this will iterate the current num, then times 2 then by 10
    for(int i = 0; i <= 10; ++i)
    {
        //outputting the numbers 
        cout << " Current Num is " << i << endl;
         //num times 2 
        cout << " Times two is " << i * 2 << endl;
        //num times 10
        cout << "Times ten is " << i*10 << endl;

        cout << endl;
    }
    return 0;
}