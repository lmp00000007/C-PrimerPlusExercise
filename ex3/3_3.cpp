#include <iostream>
using namespace std;
float calc_latitude(float degree, float minute, float second);
int main()
{
	float degree,minute,second;
	cout << "Enter a latitude in degrees minutes and seconds: " << endl;
	cout << "First enter degree: ";
	cin >> degree;
	cout << "Second enter minute: ";
	cin >> minute;
	cout << "Third enter second: ";
	cin >> second;
	cout << degree << " degrees " << minute << " minutes " << second << " seconds = " << calc_latitude(degree, minute, second) << " degrees" << endl;
	return 0;
}

float calc_latitude(float degree, float minute, float second)
{
	return (degree + minute/60.0 + second/3600.0);
}