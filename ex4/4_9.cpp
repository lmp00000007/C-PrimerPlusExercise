#include <iostream>
using namespace std;
struct CandyBar
	{
		string name;
		float weight;
		int calorie;
	};

void display_candy_bar(CandyBar * VarCandyBar);

int main()
{
	CandyBar* snack[3] = {new CandyBar, new CandyBar, new CandyBar};
	snack[0]->name = "Mocha Munch";
	snack[0]->weight = 0.23;
	snack[0]->calorie = 234;
	snack[1]->name = "ssss";
	snack[1]->weight = 0.32;
	snack[1]->calorie = 34;
	snack[2]->name = "Modunch";
	snack[2]->weight = 3.23;
	snack[2]->calorie = 294;

	display_candy_bar(snack[0]);
	display_candy_bar(snack[1]);
	display_candy_bar(snack[2]);

	delete snack[3];
	return 0;
}

void display_candy_bar(CandyBar* VarCandyBar)
{
	cout << "Name is " << VarCandyBar->name << endl;
	cout << "Weight is " << VarCandyBar->weight << endl;
	cout << "Calorie is " << VarCandyBar->calorie << endl;
}