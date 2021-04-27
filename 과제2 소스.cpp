#include<iostream>
using namespace std;
int main()
{
	int n;// 사용자에게 입력받을 정수 
	cin >> n;
	for (int i = 1; i <= n * 2; i++)//i의 값이 입력한 n의 값보다 크거나 같을 때까지 반복
	{
		for (int j = 1; j <= n; j++)//for 중첩문을 사용, j 가 n의 값보다 크거나 같을 때까지 반복
		{
			if (i % 2 == 0)//i 을 2로 나눴을 때 나머지가 0일 때
			{
				if (j % 2 == 0)// j 을 2로 나눴을 때 나머지가 0일 때
					cout << "*";//*출력
				else cout << " ";
			}
			else//i 을 2로 나눴을 때 나머지가 0이 아닐 때
			{
				if (j % 2 == 0)//j 을 2로 나눴을 때 나머지가 0일 때
					cout << " ";
				else cout << "*";
			}
		}
		cout << endl;
	}
}