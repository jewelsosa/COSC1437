#include <iostream>
using namespace std;

int main()
{
string firstname;
cout << "please enter your first name" << endl;
cin >> firstname;
string lastname;
cout << "please enter your last name" << endl;
cin >> lastname;
char firstIn = firstname[0];
char lastin = lastname[0];
cout << "your initials are " << firstIn << ". " << lastin << ".";
string newfirst = firstname.length();
string newlast = lastname.length();
cout << "your new name is now " << 

return 0;
}


