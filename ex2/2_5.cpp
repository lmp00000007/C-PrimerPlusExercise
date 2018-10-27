#include <iostream>
using namespace std;
float convert_celcius_to_fahrenheit(float celcius);
int main()
{
	float celcius;
	float fahrenheit;
	cout << "please input celcius: ";
	cin >> celcius;
	fahrenheit = convert_celcius_to_fahrenheit(celcius); 
	cout << celcius << " equals " << fahrenheit << " fahrenheit." << endl;
	return 0; 
}

float convert_celcius_to_fahrenheit(float celcius)
{
	return (celcius*1.8 + 32.0);
}