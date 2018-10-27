#include <iostream>
using namespace std;
double convert_light_year_to_astronomical_units(double light_year);
int main()
{
	double light_year;
	double astronomical_units;
	cout << "please input light year: ";
	cin >> light_year;
	astronomical_units = convert_light_year_to_astronomical_units(light_year); 
	cout << light_year << " light year equals " << astronomical_units << " astronomical units." << endl;
	return 0; 
}

double convert_light_year_to_astronomical_units(double light_year)
{
	return (light_year*63240);
}