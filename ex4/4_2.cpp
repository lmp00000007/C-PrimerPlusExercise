#include <iostream>
using namespace std;
int main()
{
	using namespace std;
	string first_name, last_name, grade;
	int age;

	cout << "what's your first name?\n";
	getline(cin, first_name);
	cout << "what's your last name?\n";
	getline(cin, last_name);
	cout << "what's your grade?\n";
	cin >> grade;
	cout << "what's your age?\n";
	cin >> age;
	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;

	return 0;
}