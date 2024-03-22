#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    const double MIN_CH = 35.00;
    const double CHAR_TAX = 4.00;
    const double OAK = 20.00;
    const double GOLD = 15.00;

    int signLen;
    char material, letterColor;

    cout << "How many characters would you like? : ";
    cin >> signLen;

    cout << "Enter material of sign, oak(o) or pine(p) : ";
    cin >> material;

    cout << "What color for lettering? Black(b), White(w), Gold(g)";
    cin >> letterColor;

    double totalCh = MIN_CH;
    //char taxes 
    if(signLen > 5){

        totalCh += CHAR_TAX * (signLen - 5);
    }
    //taxes for oak :3
    if(material == 'o' || material == 'O'){
        totalCh += OAK;
    }
   
    //gold leaf tax
    if(letterColor == 'g' || letterColor == 'G')
    {
        totalCh += GOLD;
    }

    cout << fixed << setprecision(2);
    cout << "the total for the sign is : $" << totalCh << endl;

    return 0;
}