#include <iostream>
using namespace std;
int main()
{
	struct CandyBar
	{
		char name[20];
		float weight;
		int calorie;
	};

	CandyBar snack =
	{
		"Mocha Munch",
		0.23,
		234
	};

	cout << "Name is " << (&snack)->name << endl;
	cout << "Weight is " << (&snack)->weight << endl;
	cout << "Calorie is " << (&snack)->calorie << endl;

	return 0;
}