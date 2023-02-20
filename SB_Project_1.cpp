#include <iostream>
using namespace std;

class vector
{
public:
	vector()
	{}
		
	int getlenghtx() // не понял, что значит возвращать длинну, если длинна по двум точкам, можно и Y вернуть.
	{
		return x;
	}
	void setlenghtx(int valuex)
	{
		x = valuex;
	}
	void setlenghty(int valuey)
	{
		y = valuey;
	}
	void setlenghtz(int valuez)
	{
		z = valuez;
	}
	void print()
	{
		cout << x << y << z;
	}
private:
	int x;
	int y;
	int z;
};

int main()
{
	vector v;
	v.setlenghtx(1);
	v.setlenghty(2);
	v.setlenghtz(3);
	v.print();

}	
