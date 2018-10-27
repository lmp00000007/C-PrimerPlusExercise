#include <iostream>
using namespace std;
void calc_hour_minute_second(long long seconds, int array[]);
int main()
{
	long long seconds;
	int array[4];
	cout << "Enter seconds: ";
	cin >> seconds;
	calc_hour_minute_second(seconds,array);
	cout << array[3] << " days " << array[2] << " hours " << array[1] << " minutes " << array[0] << " seconds" << endl;
	return 0;
}

void calc_hour_minute_second(long long seconds, int array[])
{
	array[3] = seconds / (60*60*24);
	array[2] = (seconds - array[3]*60*60*24) / (60*60);
	array[1] = (seconds - array[3]*60*60*24 - array[2]*60*60) / 60;
	array[0] = seconds % 60;
	/*array[0] = seconds % 60; 
	array[1] = (seconds - array[0]) / 60 % 60; 
	array[2] = (seconds - array[0] - array[1]*60) / 60 / 60 % 24; 
	array[3] = (seconds - array[0] - array[1]*60* - array[2]*60*60) / 60 / 60 / 24 ;  */	
}