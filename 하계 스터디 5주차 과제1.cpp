#include <iostream>
#include <string>

using namespace std;
int main()
{
	int repeat;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		int count;
		string str;
		cin >> count;
		cin >> str;

		for (int j = 0; j < str.length(); j++) {
			for (int a = 0; a < count; a++) {
				cout << str[j];
			}
		}
		cout << "\n";
	}
}