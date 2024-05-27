#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

	for (int asc = 0; asc < 127; asc++)
	{

		cout << char(asc);

		//When asc is divisible by 16 with No remainder, the program adds a new line,

		if (asc % 16 == 0)
		{

			cout << endl;

		}

	}

	cout << endl;

	system("pause");
	return 0;

}