#include <iostream>

using namespace std;

int main()
{
 char answer;
 cout << "Is it raining? [y=yes ,n=no] : ";
 cin >> answer;
if(answer == 'y'){
cout << "Get an Umbrella.";
}
else {
cout << "Invalid Input";
}
return 0;
 }
