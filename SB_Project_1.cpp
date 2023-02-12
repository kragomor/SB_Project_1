#include <iostream>
using namespace std;
void PrintNumbers(bool isOdd, int N)

{
	for (int i = 0; i <= N; i++) {
		if (isOdd) {
			if (i % 2 > 0) {
				cout << i << "\n";
			}
		}
		else {
			if (i % 2 == 0) {
				cout << i << "\n";
			}
		}

	}
	//for (int i = isOdd, i <= N, i+=2) { -  альтернативный укороченый вариант, завязанный на счетчике круга.
	// cout << i ;}

	}

int main()
{
	PrintNumbers (false, 10);
	PrintNumbers (true, 10);
	
		return 0;
}
