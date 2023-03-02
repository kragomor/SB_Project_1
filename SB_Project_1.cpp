#include <iostream>
#include <string>
using namespace std;


class player 
{
private:
	string name;
	int score;

public:

	void Setname(string valuename)
	{
		name = valuename;
	}

	void Setscore (int valuescore)
	{
		score = valuescore;
	}

	void print()
	{
		cout << "Имя игрока -" << name << "\t" << " Очки игрока -" << score << endl;

	}

};

int main()
{
	setlocale(LC_ALL, "ru");

	int N;
	cout << "Введите количество игроков -" << endl;
	cin >> N;

	int rows = N;
	int cols = 1;
	string name;
	int score;

	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
		
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << "Введите имя игрока -" << endl;
			cin >> name;
			arr[i] = name;

			cout << "Введите количество очков -" << endl;
			cin >> score;
			arr[j] = score;
			
			//// - далее надо выбрать сортировку, из приложеннй статьи, не понял какую нужно взять мне, они все сортируют значения слева на право, а мне надо сверху вниз и чтбы ещё имена подтягивало.


		}
		
	}


	for (int i = 0; i <= rows; i++)
	{
		delete[] arr[i];
	}
		delete [] arr;
	
		
		
		
    /*player first;
	first.Setname(.....);
	first.Setscore(.....);*/
	
	

}	
