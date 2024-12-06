#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 8; ++i){
		for (int j = i; j>= 1; --j){
			std::cout << j << "";
		}
		std::cout << std::endl;
	}
	return 0;
}
