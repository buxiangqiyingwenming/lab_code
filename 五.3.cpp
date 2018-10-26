#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

void count(int* p, int* plus, int* negative)
{
	int a,pl,ne;
	pl = 0;
	ne = 0;
	for (a = 0; a < 20; a++)
	{
		if (p[a] > 0)
			pl++;
		else if (p[a] < 0)
			ne++;
		else
			break;
	}
	*plus = pl;
	*negative = ne;
}

void val(int* p, int* value)
{
	int b, add, value1;
	add = 0;
	for (b = 0; b < 20; b++)
	{
		if (p[b] == 0)
			break;
		add += p[b];
	}
	value1 = add / b;
	*value = value1;
}

void var(int* p, int val, int* variance)
{
	int c, var;
	var = 0;
	for (c = 0; c < 20; c++)
	{
		if (p[c] == 0)
			break;
		var += (p[c] - val)*(p[c] - val);
	}
	*variance = var;
}

void sort(int* p)
{
	int d, e, f, n;
	for (n = 0; n < 20; n++)
	{
		if (p[n] == 0)
			break;
	}
	int swap;
	for (d = 0; d < n-1; d++)
	{
		for (e = 0; e < n - d - 1; e++)
		{
			if (p[e] > p[e + 1])
			{
				swap = p[e];
				p[e] = p[e + 1];
				p[e+1]=swap;
			}
		}
	}
	for (f = 0; f < n; f++)
	{
		cout << p[f] << "  ";
	}
}



int main()
{
	int* p = new int[20];
	int i;
	for (i = 0; i < 20; i++)
	{
		cin >> p[i];
		if (p[i] == 0)
			break;
	}
	int j;
	for (j = 0; j < i; j++)
	{
		cout << p[j] << "  ";
	}
	cout << endl;
	int plus, negative, value, variance;
	int* plu; int* neg;
	plu = &plus;
	neg = &negative;
	count(p, plu, neg);
	cout <<"正数个数为："<< plus << "  负数个数为：" << negative << endl;
	int* valu;
	valu = &value;
	val(p, valu);
	cout << "均值为：" << value << endl;
	int* vari;
	vari = &variance;
	var(p, value, vari);
	cout << "方差为：" << variance << endl;
	cout << "从小到大的顺序为：" << endl;
	sort(p);
	delete[]p;
	cout << " " << endl;
	system("pause");
	return 0;
}