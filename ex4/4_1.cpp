#include <iostream>
using namespace std;
int main()
{
	using namespace std;
	char first_name[20], last_name[20], grade;
	int age;

	cout << "what's your first name?\n";
	cin.getline(first_name, 20);
	cout << "what's your last name?\n";
	cin.getline(last_name, 20);
	cout << "what's your grade?\n";
	cin >> grade;
	cout << "what's your age?\n";
	cin >> age;
	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;

	return 0;
}