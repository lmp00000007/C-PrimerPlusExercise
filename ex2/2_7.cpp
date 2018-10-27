#include <iostream>
using namespace std;
void show_time(int hour, int minute);
int main()
{
	int hour,minute;
	cout << "Please enter hour: ";
	cin >> hour;
	cout << "please enter minute: ";
	cin	>> minute;
	show_time(hour,minute);
	return 0;
}

void show_time(int hour, int minute)
{
	cout << "Time: " << hour << ":" << minute << endl;
}