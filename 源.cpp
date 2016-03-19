#include<iostream>
#include<ctime> 
#include<vector> 
using namespace std;
int zq=0;
void chengchu00(int min, int max)//整数无余数
{
	int c1, c2, k,z,x;
	c1 = rand() % (max - min) + min + 1;
	c2 = rand() % (max - min) + min + 1;
	k = rand() % 2;
	if (k == 0)//---------------------------------乘法部分
	{
		cout << c1 << "*" << c2 << "=" << endl;
		x = c1*c2;
		cout << "请输入你的答案：" << endl;
		cin >> z;
		if (z == x)
		{
			cout << "正确" << endl;
			++zq;
		}
		else
			cout << "错误，正确答案是：" << x << endl;
	}
	else//------------------------------除法部分
	{
		for (;;)
		{
			c1 = rand() % (max - min) + min + 1;
			c2 = rand() % (max - min) + min + 1;
			int c3 = c1*c2;
			do
			{
				c3 = c3 - c1;

			} while (c3 > max);
			if ((c3 < max) && (c1 != 0))
			{
				cout << c3 << "/" << c1 << "=" << endl; 
				x = c3/c1;
				cout << "请输入你的答案：" << endl;
				cin >> z;
				if (z == x)
				{
					cout << "正确" << endl;
					++zq;
				}
				else
					cout << "错误，正确答案是：" << x << endl; break;
			}
		}
	}
}
void chengchu01(int min, int max)//整数有余数
{
	int c1, c2, k;
	float x,z;
	c1 = rand() % (max - min) + min + 1;
	c2 = rand() % (max - min) + min + 1;
	k = rand() % 2;
	if (k == 0)//---------------------------------乘法部分
	{
		cout << c1 << "*" << c2 << "=" << endl;
		x = c1*c2;
		cout << "请输入你的答案：" << endl;
		cin >> z;
		if (z == x)
		{
			cout << "正确" << endl;
			++zq;
		}
		else
			cout << "错误，正确答案是：" << x << endl;
	}
	else//------------------------------除法部分
	{
		for (;;)
		{
			c1 = rand() % (max - min) + min + 1;
			if (c1 == 0)
			{
				c2 = rand() % (max - min) + min + 1;
				if (c2 != 0)
				{
					cout << c1 << "/" << c2 << "=" << endl;
					x =(float) c1 / c2;
					cout << "请输入你的答案：" << endl;
					cin >> z;
					if (z == x)
					{
						cout << "正确" << endl;
						++zq;
					}
					else
						cout << "错误，正确答案是：" << "(" <<c1<<"/"<<c2<<")"<<endl; break;
				}
			}
			else
			{
				c2 = rand() % c1;
				if (c2 != 0)
				{
					cout << c1 << "/" << c2 << "=" << endl; 
					x = c1 / c2;
					int y = c1%c2;
					cout << "请输入你的答案：" << endl;
					int m;
					cin >> z>>m;
					if ((z == x)&&(y==m))
					{
						cout << "正确" << endl;
						++zq;
					}
					else
						cout << "错误，正确答案是：" << "(" << c1 << "/" << c2 << ")" << endl; break;
				}
			}
		}
	}
}
void jiajian00(int min, int max)//整数无负数
{
	int c1, c2, k,x,z;
	c1 = rand() % (max - min) + min + 1;
	c2 = rand() % (max - min) + min + 1;
	k = rand() % 2;
	if (k == 0)//---------------------------------加法部分
	{
		cout << c1 << "+" << c2 << "=" << endl;
		x = c1 + c2;
		cout << "请输入你的答案：" << endl;
		cin >> z;
		if (z == x)
		{
			cout << "正确" << endl;
			++zq;
		}
		else
			cout << "错误，正确答案是：" << x << endl;

	}
	else//------------------------------减法部分
	{
		if (c1>c2)
		{
			cout << c1 << "-" << c2 << "=" << endl;
			x = c1 - c2;
			cout << "请输入你的答案：" << endl;
			cin >> z;
			if (z == x)
			{
				cout << "正确" << endl;
				++zq;
			}
			else
				cout << "错误，正确答案是：" << x << endl;
		}
		else
		{
			cout << c2 << "-" << c1 << "=" << endl;
			x = c2 - c1;
			cout << "请输入你的答案：" << endl;
			cin >> z;
			if (z == x)
			{
				cout << "正确" << endl;
				++zq;
			}
			else
				cout << "错误，正确答案是：" << x << endl;
		}
			
	}
}
void jiajian01(int min, int max)//整数有负数
{
	int c1, c2, k,x,z;
	c1 = rand() % (max - min) + min + 1;
	c2 = rand() % (max - min) + min + 1;
	k = rand() % 2;
	if (k == 0)//---------------------------------加法部分
	{
		cout << c1 << "+" << c2 << "=" << endl;
		x = c1+ c2;
		cout << "请输入你的答案：" << endl;
		cin >> z;
		if (z == x)
		{
			cout << "正确" << endl;
			++zq;
		}
		else
			cout << "错误，正确答案是：" << x << endl;
	}
	else//------------------------------减法部分
	{
		cout << c1 << "-" << c2 << "=" << endl;
		x = c1 - c2;
		cout << "请输入你的答案：" << endl;
		cin >> z;
		if (z == x)
		{
			cout << "正确" << endl;
			++zq;
		}
			
		else
			cout << "错误，正确答案是：" << x << endl;
	}
}
void fushuyushu0(int a,int b, int min, int max)//整数运算
{

	if ((a == 1) && (b == 1))
	{
		int k = rand() % 2;
		if (k == 0)
		{
			chengchu01(min, max);
		}
		else
			jiajian01(min, max);
	}
	if ((a == 0) && (b == 0))
	{
		int k = rand() % 2;
		if (k == 0)
		{
			chengchu00(min, max);
		}
		else
			jiajian00(min, max);
	}
	if ((a == 0) && (b == 1))
	{
		int k = rand() % 2;
		if (k == 0)
		{
			chengchu01(min, max);
		}
		else
			jiajian00(min, max);
	}
	if ((a == 1) && (b == 0))
	{
		int k = rand() % 2;
		if (k == 0)
		{
			chengchu00(min, max);
		}
		else
			jiajian01(min, max);
	}

}

void chengchu10(int min, int max)//真分数无余数
{
	int c1, c2, c3, c4, k;
	c1 = rand() % (max - min) + min + 1;
	c2 = rand() % (max - min) + min + 1;
	c3 = rand() % (max - min) + min + 1;
	c4 = rand() % (max - min) + min + 1;
	k = rand() % 2;
	if (k == 0)//---------------------------------乘法部分
		cout << "cuowu";
	else//------------------------------除法部分
	{
		cout << "cuowu";
		
	}
}
void jiajian10(int min, int max)//真分数无负数
{
	int c1, c2, k;
	c1 = rand() % (max - min) + min + 1;
	c2 = rand() % (max - min) + min + 1;
	k = rand() % 2;
	if (k == 0)//---------------------------------加法部分
	{
		cout << c1 << "+" << c2 << "=" << endl;
	}
	else//------------------------------减法部分
	{
		if (c1>c2)
		{
			cout << c1 << "-" << c2 << "=" << endl;
		}
		else
			cout << c2 << "-" << c1 << "=" << endl;


	}
}
void jiajian11(int min, int max)//真分数有负数
{
	int c1, c2, k;
	c1 = rand() % (max - min) + min + 1;
	c2 = rand() % (max - min) + min + 1;
	k = rand() % 2;
	if (k == 0)//---------------------------------加法部分
	{
		cout << c1 << "+" << c2 << "=" << endl;
	}
	else//------------------------------减法部分
	{
		cout << c1 << "-" << c2 << "=" << endl;
	}
}
void fushuyushu1(int a, int b, int min, int max)//真分数运算
{

	if (a == 1)
	{
		int k = rand() % 2;
		if (k == 0)
			chengchu10(min, max);
		else
			jiajian11(min, max);
	}
	if (a == 0)
	{
		int k = rand() % 2;
		if (k == 0)
			chengchu10(min, max);
		else
			jiajian10(min, max);
	}
}
int main()
{
	int a, b, c, min, max,N;
	cout << "请输入出题数目：" << endl;
	cin >> N;
	cout << "减法是否有负数：（0否；1是）" << endl;
	cin >> a;
	cout << "除法是否有余数：（0否；1是）" << endl;
	cin >> b;
	cout << "请分别输入下限和上限" << endl;
	cin >> min >> max;
	for (int i = 0; i < N; i++)
	{
		fushuyushu0(a, b, min, max);
	}
	cout << "共答对" << zq << "道题" << endl;
	/*cout << "整数运算输入0，真分数运算输入1" << endl;
	cin >> c;
	if (c == 0)
	{
		cout << "减法是否有负数：（0否；1是）" << endl;
		cin >> a;
		cout << "除法是否有余数：（0否；1是）" << endl;
		cin >> b;
		cout << "请分别输入下限和上限" << endl;
		cin >> min >> max;
		for (int i = 0; i < 100; i++)
		{
			fushuyushu0(a, b, min, max);
		}
	}
		
	  else
	{
		for (int i = 0; i < 100; i++)
		{
			cout << "减法是否有负数：（0否；1是）" << endl;
			cin >> a;
			fushuyushu1(a,b,min, max);
		}

	}*/
	return 0;
}