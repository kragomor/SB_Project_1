#include <iostream>
#include <string>
//#include <bits/stdc++.h>
using namespace std;


class player 
{
private:
	string name;
	int score;

public:

	int Getscore()
	{
		return score;
	}

	void Enter ()
	{
		cout << "Введите имя игрока -" << endl;
		cin >> name;
		cout << "Введите количество очков -" << endl;
		cin >> score;
	}
	void swap(player& p1, player& p2)
	{
		player temp = p1;
		p1 = p2;
		p2 = temp;
		
	}
	void bubbleSort(player arr[], int size)
	{
		for (int i = 0; i < size-1; i++)
		{
			for (int j = 0; j < size-i-1 ; j++)
			{
				if (arr[j].score > arr[j+1].score)
				{
					swap(arr[j], arr[j+1]);
					
				}
			}
			
		}
	}
	void print()
	{
		cout << "Имя игрока - " << name << "\t" << "Очки игрока -" << score << endl;

	}
			
};

int main()
{
	setlocale(LC_ALL, "ru");
	int size;
	cout << "Введите количество игроков -" << endl;
	cin >> size;

	player* Array = new player[size];

	for (int x = 0; x < size; x++)
	{
		Array[x].Enter();

	}
	Array->bubbleSort (Array, size);

	for (int x = 0; x < size; x++)
	{
		Array[x].print();

	}
	/*for (int x = 0; x < size; x++)
	{
		delete Array[x];
	}*/
	delete[] Array;

}

