#include<iostream>
using namespace std;

void bubble(int*&, int*&, int);
int n;
int *p = NULL, *q = NULL;
int main()
{


	cout << "���������ݸ���";
	cin >> n;
	p = new int[n];
	q = new int[n];
	cout << "���������ݣ�" << endl;
	for (int i = 0; i < n; i++)
	{
		q[i] = i + 1;
		cout << "n(" << q[i] << ")=";
		cin >> p[i];
	}

	bubble(p, q, n);
	cout << "���´Ӵ�С����������Ϊ" << endl;
	for (int i=0;i<n;i++)
	{
		cout << "n(" << q[i] << ") " << p[i]<<endl;
	}
	system("pause");
}

void bubble(int *&a, int *&b, int n)
{
	int i, temp1,temp2, work;
	for (int pass = 1; pass < n; pass++)
	{
		work = 1;
		for(i=0;i<n-pass;i++)
			if (a[i] < a[i + 1])
			{
				temp1 = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp1;
				temp2 = b[i];
				b[i] = b[i + 1];
				b[i + 1] = temp2;
				work = 0;
			}
		if (work)break;
	}
}