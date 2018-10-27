#include <iostream>
using namespace std;
struct CandyBar
	{
		char name[20];
		float weight;
		int calorie;
	};

void display_candy_bar(CandyBar VarCandyBar);

int main()
{
	CandyBar snack[3];
	snack[0] =
	{
		"Mocha Munch",
		0.23,
		234
	};
	snack[1] =
	{
		"b",
		0.33,
		555
	};
	snack[2] =
	{
		"c",
		0.55,
		394
	};

	display_candy_bar(snack[0]);
	display_candy_bar(snack[1]);
	display_candy_bar(snack[2]);

	return 0;
}

void display_candy_bar(CandyBar VarCandyBar)
{
	cout << "Name is " << VarCandyBar.name << endl;
	cout << "Weight is " << VarCandyBar.weight << endl;
	cout << "Calorie is " << VarCandyBar.calorie << endl;
}