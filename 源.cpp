#include<iostream>
#include<ctime> 
#include<vector> 
using namespace std;
int zq=0;
void chengchu00(int min, int max)//����������
{
	int c1, c2, k,z,x;
	c1 = rand() % (max - min) + min + 1;
	c2 = rand() % (max - min) + min + 1;
	k = rand() % 2;
	if (k == 0)//---------------------------------�˷�����
	{
		cout << c1 << "*" << c2 << "=" << endl;
		x = c1*c2;
		cout << "��������Ĵ𰸣�" << endl;
		cin >> z;
		if (z == x)
		{
			cout << "��ȷ" << endl;
			++zq;
		}
		else
			cout << "������ȷ���ǣ�" << x << endl;
	}
	else//------------------------------��������
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
				cout << "��������Ĵ𰸣�" << endl;
				cin >> z;
				if (z == x)
				{
					cout << "��ȷ" << endl;
					++zq;
				}
				else
					cout << "������ȷ���ǣ�" << x << endl; break;
			}
		}
	}
}
void chengchu01(int min, int max)//����������
{
	int c1, c2, k;
	float x,z;
	c1 = rand() % (max - min) + min + 1;
	c2 = rand() % (max - min) + min + 1;
	k = rand() % 2;
	if (k == 0)//---------------------------------�˷�����
	{
		cout << c1 << "*" << c2 << "=" << endl;
		x = c1*c2;
		cout << "��������Ĵ𰸣�" << endl;
		cin >> z;
		if (z == x)
		{
			cout << "��ȷ" << endl;
			++zq;
		}
		else
			cout << "������ȷ���ǣ�" << x << endl;
	}
	else//------------------------------��������
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
					cout << "��������Ĵ𰸣�" << endl;
					cin >> z;
					if (z == x)
					{
						cout << "��ȷ" << endl;
						++zq;
					}
					else
						cout << "������ȷ���ǣ�" << "(" <<c1<<"/"<<c2<<")"<<endl; break;
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
					cout << "��������Ĵ𰸣�" << endl;
					int m;
					cin >> z>>m;
					if ((z == x)&&(y==m))
					{
						cout << "��ȷ" << endl;
						++zq;
					}
					else
						cout << "������ȷ���ǣ�" << "(" << c1 << "/" << c2 << ")" << endl; break;
				}
			}
		}
	}
}
void jiajian00(int min, int max)//�����޸���
{
	int c1, c2, k,x,z;
	c1 = rand() % (max - min) + min + 1;
	c2 = rand() % (max - min) + min + 1;
	k = rand() % 2;
	if (k == 0)//---------------------------------�ӷ�����
	{
		cout << c1 << "+" << c2 << "=" << endl;
		x = c1 + c2;
		cout << "��������Ĵ𰸣�" << endl;
		cin >> z;
		if (z == x)
		{
			cout << "��ȷ" << endl;
			++zq;
		}
		else
			cout << "������ȷ���ǣ�" << x << endl;

	}
	else//------------------------------��������
	{
		if (c1>c2)
		{
			cout << c1 << "-" << c2 << "=" << endl;
			x = c1 - c2;
			cout << "��������Ĵ𰸣�" << endl;
			cin >> z;
			if (z == x)
			{
				cout << "��ȷ" << endl;
				++zq;
			}
			else
				cout << "������ȷ���ǣ�" << x << endl;
		}
		else
		{
			cout << c2 << "-" << c1 << "=" << endl;
			x = c2 - c1;
			cout << "��������Ĵ𰸣�" << endl;
			cin >> z;
			if (z == x)
			{
				cout << "��ȷ" << endl;
				++zq;
			}
			else
				cout << "������ȷ���ǣ�" << x << endl;
		}
			
	}
}
void jiajian01(int min, int max)//�����и���
{
	int c1, c2, k,x,z;
	c1 = rand() % (max - min) + min + 1;
	c2 = rand() % (max - min) + min + 1;
	k = rand() % 2;
	if (k == 0)//---------------------------------�ӷ�����
	{
		cout << c1 << "+" << c2 << "=" << endl;
		x = c1+ c2;
		cout << "��������Ĵ𰸣�" << endl;
		cin >> z;
		if (z == x)
		{
			cout << "��ȷ" << endl;
			++zq;
		}
		else
			cout << "������ȷ���ǣ�" << x << endl;
	}
	else//------------------------------��������
	{
		cout << c1 << "-" << c2 << "=" << endl;
		x = c1 - c2;
		cout << "��������Ĵ𰸣�" << endl;
		cin >> z;
		if (z == x)
		{
			cout << "��ȷ" << endl;
			++zq;
		}
			
		else
			cout << "������ȷ���ǣ�" << x << endl;
	}
}
void fushuyushu0(int a,int b, int min, int max)//��������
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

void chengchu10(int min, int max)//�����������
{
	int c1, c2, c3, c4, k;
	c1 = rand() % (max - min) + min + 1;
	c2 = rand() % (max - min) + min + 1;
	c3 = rand() % (max - min) + min + 1;
	c4 = rand() % (max - min) + min + 1;
	k = rand() % 2;
	if (k == 0)//---------------------------------�˷�����
		cout << "cuowu";
	else//------------------------------��������
	{
		cout << "cuowu";
		
	}
}
void jiajian10(int min, int max)//������޸���
{
	int c1, c2, k;
	c1 = rand() % (max - min) + min + 1;
	c2 = rand() % (max - min) + min + 1;
	k = rand() % 2;
	if (k == 0)//---------------------------------�ӷ�����
	{
		cout << c1 << "+" << c2 << "=" << endl;
	}
	else//------------------------------��������
	{
		if (c1>c2)
		{
			cout << c1 << "-" << c2 << "=" << endl;
		}
		else
			cout << c2 << "-" << c1 << "=" << endl;


	}
}
void jiajian11(int min, int max)//������и���
{
	int c1, c2, k;
	c1 = rand() % (max - min) + min + 1;
	c2 = rand() % (max - min) + min + 1;
	k = rand() % 2;
	if (k == 0)//---------------------------------�ӷ�����
	{
		cout << c1 << "+" << c2 << "=" << endl;
	}
	else//------------------------------��������
	{
		cout << c1 << "-" << c2 << "=" << endl;
	}
}
void fushuyushu1(int a, int b, int min, int max)//���������
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
	cout << "�����������Ŀ��" << endl;
	cin >> N;
	cout << "�����Ƿ��и�������0��1�ǣ�" << endl;
	cin >> a;
	cout << "�����Ƿ�����������0��1�ǣ�" << endl;
	cin >> b;
	cout << "��ֱ��������޺�����" << endl;
	cin >> min >> max;
	for (int i = 0; i < N; i++)
	{
		fushuyushu0(a, b, min, max);
	}
	cout << "�����" << zq << "����" << endl;
	/*cout << "������������0���������������1" << endl;
	cin >> c;
	if (c == 0)
	{
		cout << "�����Ƿ��и�������0��1�ǣ�" << endl;
		cin >> a;
		cout << "�����Ƿ�����������0��1�ǣ�" << endl;
		cin >> b;
		cout << "��ֱ��������޺�����" << endl;
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
			cout << "�����Ƿ��и�������0��1�ǣ�" << endl;
			cin >> a;
			fushuyushu1(a,b,min, max);
		}

	}*/
	return 0;
}