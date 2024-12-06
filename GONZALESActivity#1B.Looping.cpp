#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 8; ++i){
		for (int j = 1; j <= i; ++j){
			cout << "#";
		}
		std::cout << std::endl;
	}
	return 0;
}
