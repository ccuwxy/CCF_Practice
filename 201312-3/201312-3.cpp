#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[1005] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int x = 1;
	int temp;
	int area=0;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		while (temp >= 1)
		{
			if (a[i + x] >= temp)
			{
				x++;
			}
			else
			{
				if (temp*x > area)
				{
					area = temp * x;
				}
				x = 1;
				temp--;
			}
		}
	}
	cout << area;
	system("pause");
	return 0;
}