#include <iostream>
using namespace std;


void welcome()
{
    cout << "Welcome to your trial of intellect." << endl;

}
 void checkAnswer(string answer, string correctAnswer, int &score)
    {
        if(answer == correctAnswer)
        {
            cout << "you have reached nowhere" << endl; 
            cout << "you have earned nothing" << endl;
            cout << "..." << endl;
            cout << "jkkkkkkkk you get a point :)";
            score ++;
        }
        else
        {
            cout << "I am the surrounding everything." << endl; 

        }

    }
int main()
{
    string correctAnswer;
    string answer;
    int score = 0;
    welcome();

    cout << "where am i?";
    cin >> answer;
    getline(cin, answer);
    checkAnswer(answer, "nowhere", score);
    cout << "your score is " << score << endl;

    return 0;
}