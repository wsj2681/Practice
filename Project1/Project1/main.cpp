#include <iostream>
using namespace std;

void main()
{
	for (size_t i = 0; i < 10; ++i)
	{

		for (size_t j = 0; j < 10; j++)
		{
			if (i + j == 10 || i == j)
			{
				cout << '*';
			}
			else
			{
				cout << ' ';
			}
		}
		cout << endl;
	}

}