#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,j,k,n,he;//---he��������ĺͣ�
	k = 0;
	cout << "����������ĸ�����";
	cin >> n;
	int *array = new int[100];//-----���ٿռ�

	cout << "������һ������:" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	int max = array[0];//---��ʼ�����ֵ
	for (i = 0; i < n; i++)//-------��һ����.a0.a1.a2.a3.a4
	{
		for (j = i+1; j < n+1; j++)//--------�ڶ�����a0.a1.a2.a3.a4.
		{
			int k = {};
			for (int l = i; l < j; l++)//------���������
			{
				k = k+array[l];
			}
			if (max < k)
			{
				max = k;
			}
		}
	}
	cout << max;
	return 0;
}