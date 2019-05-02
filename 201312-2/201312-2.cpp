#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	string a, b, c;
	char d;
	cin >> s;
	a = s.substr(0, 1);
	b = s.substr(2, 3);
	c = s.substr(6, 5);
	d = s.substr(s.find_last_of('-') + 1, 1)[0];
	int sum = 0;
	//cout << a << endl;
	//cout << b << endl;
	//cout << c << endl;

	sum += (a[0] - 48) * 1;
	sum += (b[0] - 48) * 2;
	sum += (b[1] - 48) * 3;
	sum += (b[2] - 48) * 4;
	sum += (c[0] - 48) * 5;
	sum += (c[1] - 48) * 6;
	sum += (c[2] - 48) * 7;
	sum += (c[3] - 48) * 8;
	sum += (c[4] - 48) * 9;
	
	if (sum % 11 == 10 && d == 'X'||sum%11 == d-'0')
	{
		cout << "Right";
	}
	else if (sum % 11 != 10)
	{
		cout << a << '-' << b << '-' << c << '-' << sum % 11;
	}
	else
	{
		cout << a << '-' << b << '-' << c << '-' << 'X';
	}

	system("pause");
	return 0;
}

//char[12]   strlen   for