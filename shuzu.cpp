#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,j,k,n,he;//---he（子数组的和）
	k = 0;
	cout << "请输入数组的个数：";
	cin >> n;
	int *array = new int[100];//-----开辟空间

	cout << "请输入一个数组:" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> array[i];
	}

	int max = array[0];//---初始化最大值
	for (i = 0; i < n; i++)//-------第一个点.a0.a1.a2.a3.a4
	{
		for (j = i+1; j < n+1; j++)//--------第二个点a0.a1.a2.a3.a4.
		{
			int k = {};
			for (int l = i; l < j; l++)//------子数组求和
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