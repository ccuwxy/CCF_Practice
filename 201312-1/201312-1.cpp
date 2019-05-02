#include<iostream>
using namespace std;

int main()
{
	int n;
	int si;
	int s[10001] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> si;
		s[si]++;
	}
	int max = s[0];
	int num = 0;
	for (int i = 10000; i >=0; i--)
	{
		if (s[i] >= max)
		{
			max = s[i];
			num = i;
		}
	}
	cout << num;
	//system("pause");
	return 0;
}
