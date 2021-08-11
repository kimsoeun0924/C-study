#include <iostream>
using namespace std;

int main()
{
	int max, min;
	int Count = 0; 
	int Count2 = 0;  
	int R = 0, Number;  

	cin >> min;
	cin >> max;

	for (int i = min; i <= max; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				Count++;
		}

		if (Count == 2)
		{
			Count2++;
			R += i;

			if (Count2 == 1)
				Number = i;
		}
		Count = 0;
	}

	if (Count2 == 0)
	{
		Number = -1;
		cout << Number << endl;
	}
	else
	{
		cout << R<< endl << Number << endl;
	}

	return 0;
}