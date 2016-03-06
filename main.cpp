#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
int main()
{
	int num1, num2, sym;
	srand((int)time(NULL));
	for (int i = 1; i < 30; i++)
	{
		num1 = rand() % 100;
		num2 = rand() % 100;
		int k = rand() % 2;
		sym = rand() % 4;

		if (k == 1)   //-------------------整数运算
		{
			if (sym == 0)
			{
				cout << num1 << "+" << num2 << "=" << endl;
			}
			if (sym == 1)
			{
				cout << num1 << "-" << num2 << "=" << endl;
			}
			if (sym == 2)
			{
				cout << num1 << "*" << num2 << "=" << endl;
			}
			if (sym == 3)
			{
				if (num2 == 0)
				{
					num2 = rand() % 100 + 1;
					cout << num1 << "/" << num2 << "=" << endl;
				}
				else
					cout << num1 << "/" << num2 << "=" << endl;
			}
		}

		if (k == 0)   //-------------------真分数运算
		{
			int a, b, c, d;
			a = rand() % 100;
			b = rand() % 100;
			c = rand() % 100;
			d = rand() % 100;
			for (;;)
			{
				if ((a > b&&b != 0) && (c > d&&d != 0))
				{
					num1 = b / a;
					num2 = d / c;
					break;
				}
				else
					a = rand() % 100;
				b = rand() % 100;
				c = rand() % 100;
				d = rand() % 100;

			}
			if (sym == 0)
			{
				cout << b << "/" << a << "+" << d << "/" << c << "=" << endl;
			}
			if (sym == 1)
			{
				cout << b << "/" << a << "-" << d << "/" << c << "=" << endl;
			}
			if (sym == 2)
			{
				cout << b << "/" << a << "*" << d << "/" << c << "=" << endl;
			}
			if (sym == 3)
			{
				if (d == 0)
				{
					num2 = (d + 1) / (c + 1);
					cout << b << "/" << a << " / " << d << "/" << c << "=" << endl;
				}
				else
					cout << b << "/" << a << " / " << d << "/" << c << "=" << endl;
			}
		}
	}
	return 0;
}
