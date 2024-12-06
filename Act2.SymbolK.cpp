#include <iostream>
using namespace std;

int main() {
	char fisrt_symbol, second_symbol, third_symbol;
	cout << "Enter 1st symbol: ";
	cin >> fisrt_symbol;
	cout << "Enter 2nd symbol: ";
	cin >> second_symbol;
	cout << "Enter 3rd symbol: ";
	cin >> third_symbol;
	for(int i = 0; i < 6; i++) {
		for(int j = 0; j < 20; j++) {
			cout << " ";
		}
		for(int j = 0; j < i; j++) {
			cout << " " << fisrt_symbol;
		}
		for(int j = 0; j < 1; j++) {
			cout << " " << second_symbol;
		}
		cout << endl;
	}
	for(int i = 0; i < 2; i++) {
		for (int j = 0; j < 10; j++) {
			cout << " " << third_symbol;
		}
		for(int j = 0; j < 6; j++) {
			cout << " " << fisrt_symbol;
		}
		for (int j = 0; j < 1; j++) {
			cout << " " << second_symbol;
		}
		cout << endl;
	}
	for(int i = 0; i < 6; i++) {
		for(int j = 0; j < 20; j++) {
			cout << " ";
		}
		for(int j = i; j < 5; j++) {
			cout << " " << fisrt_symbol;
		}
		for(int j = 0; j < 1; j++) {
			cout << " " << second_symbol;
		}
		cout << endl;
	}
}
