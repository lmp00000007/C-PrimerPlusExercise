#include <iostream>
using namespace std;

void print_mice();
void print_action();

int main()
{
	print_mice();
	print_mice();
	print_action();
	print_action();
	return 0;
}

void print_mice()
{
	cout << "Three blind mice" << endl;	
}

void print_action()
{
	cout << "See how they run" << endl;	
}
