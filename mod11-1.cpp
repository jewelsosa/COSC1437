#include <iostream>
#include <vector>

using namespace std;
int vectorSum(const vector<int>& numbers, int index = 0)
{
    //base case, if the index is equal to the size of the vector, return 0
    if(index==numbers.size())
    {
        return 0;
    }
    //recursive part, add the current element to the sum of the rest of the elements
    return numbers[index] + vectorSum(numbers, index + 1);
}

//hehe I was here-Angie uhm hello!

int main() 
{
    //vector w integers thatll be added together 
    vector<int> numbers = {1,2,3,4,5};

    //call vector sum function and output result
    cout << "sum of vector elements: " << vectorSum(numbers) << endl;

    return 0;
}