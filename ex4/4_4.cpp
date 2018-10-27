#include <iostream>
using namespace std;
int main()
{
	string first_name, last_name, full_name;
	cout << " please enter your first name: ";
	getline(cin, first_name);
	cout << " please enter your last name: ";
	getline(cin, last_name);
	full_name = last_name + ", " + first_name;
	cout << " full name is " << full_name << endl;
	return 0;
}