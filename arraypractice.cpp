#include <iostream>

using namespace std;
//first example of an array using strings
int main()
{
    string sizes[3] = {"small", "medium", "large"}; 
    for(int i = 0, i< sizes.length; i++)
    {

    }
    cout << sizes[0] << endl;


    //2-D arrays with a nested for loop
    
    int sizes[3][5];
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<5 ; j++)
        {
            sizes[i][j] = i*j
            cout << sizes[i][j] << "\t";
        }
        cout << endl;
    }

    return 0; 
}