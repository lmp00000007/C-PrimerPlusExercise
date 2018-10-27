#include <iostream>
using namespace std;
int main()
{
	char first_name[30], last_name[30];
	cout << " please enter your first name: ";
	cin.getline(first_name, 30);
	cout << " please enter your last name: ";
	cin.getline(last_name, 30);
	cout << " full name is " << last_name << ", " << first_name << endl;
	return 0;
}