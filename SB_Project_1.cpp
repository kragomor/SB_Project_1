#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	struct tm newtime;
	time_t now = time(0);
	localtime_s(&newtime, &now);
	int Day = newtime.tm_mday;
	
	const int N = 5;
	int array[N][N]; 
	
	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < N; j++) 
		{
			array[i][j] = i + j;
			cout << array[i][j];
		}
		cout << endl;

	}

	int i = (Day % N) + 1;
	int sum = array[i][0] + array[i][1] + array[i][2] + array[i][3] + array[i][4];
	
	cout << Day << endl;
	cout << sum << endl;
}	
