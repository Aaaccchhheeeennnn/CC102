#include <iostream>

using namespace std;

int main() {
	int age;
	string with_parents;
	double money;
	
	cout << "Enter your age: ";
	cin >> age;
	cout << "Are you with your parents? (yes/no): ";
    cin >> with_parents;
	
	cout << "Enter the amount of money you have: $";
	cin >> money;
	
	if (age < 13) {
        if (with_parents == "yes") {
            cout << "You can watch G or PG movies." << endl;
            if (money >= 7.50) {
                cout << "You have enough money for a matinee." << endl;
            } else {
                cout << "You do not have enough money for a matinee." << endl;
            }
        } else {
            cout << "You can only watch G movies." << endl;
            if (money >= 7.50) {
                cout << "You have enough money for a matinee." << endl;
            } else {
                cout << "You do not have enough money for a matinee." << endl;

    } else if (age >= 13 && age < 16) {
        if (with_parents == "yes") {
            cout << "You can watch G, PG, or R movies." << endl;
            if (money >= 7.50) {
                cout << "You have enough money for a matinee." << endl;
            } else {
                cout << "You do not have enough money for a matinee." << endl;
            }
        } else {
            cout << "You can watch G or PG movies." << endl;
            if (money >= 7.50) {
                cout << "You have enough money for a matinee." << endl;
            } else {
                cout << "You do not have enough money for a matinee." << endl;
            }
        }
    } else if (age >= 16) {
        cout << "You can watch G, PG, or R movies." << endl;
        if (money >= 10.50) {
            cout << "You have enough money for an evening show." << endl;
        } else if (money >= 7.50) {
            cout << "You have enough money for a matinee." << endl;
        } else {
            cout << "You do not have enough money for a movie." << endl;
        }
    }

    return 0;
}
