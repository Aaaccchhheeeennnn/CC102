#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "What is your age?";
	cin >> age;
	if (age < 16)
	{
		cout << "Your to young to drive";
	}
	else if (age == 16) {
		cout << "Better clear the road";
	}
	else if (age>16)
		cout << "You are Getting Preaty Old";
	return 0;
}
