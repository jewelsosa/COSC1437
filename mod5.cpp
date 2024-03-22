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
// this is the part where i try my best
string fullname = firstname + " " + lastname;
getline(cin, fullname);
//i tried using a standard array, so now im using ANOtHER array to get the chunks of strings
// i did ask for help and watch youtube for this
size_t spacePos = fullname.find(' ');

firstname = fullname.substr(0, spacePos);
lastname = fullname.substr(spacePos + 1);

size_t firsthalf = firstname.length() / 2;
size_t lasthalf = lastname.length() / 2;

string newfirst = firstname.substr(0, firsthalf) + lastname.substr(lasthalf);
string  newlast = lastname.substr(0, lasthalf) + firstname.substr(firsthalf);

string newfull = newfirst + newlast;
cout << "your new name is now " << newfull;

return 0;
}


