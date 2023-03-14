#include <iostream>
#include <string>

using namespace std;


class ANIMAL 
{
public:
	
	virtual void voice()
	{
		cout << "....." << endl;
	}
};

class DOG : public ANIMAL
{
public:
	void voice() override
	{
		cout << "Woof" << endl;
	}
};
class CAT : public ANIMAL
{
public:
	void voice() override
	{
		cout << "Mur" << endl;
	}
};
class BEAR : public ANIMAL
{
public:
	void voice() override
	{
		cout << "Arrr" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

    ANIMAL* Array[3] = { new DOG, new CAT, new BEAR };

	for (int i = 0; i < 3; i++)
	{
		Array[i]->voice();

	}

	delete[] Array;


}

