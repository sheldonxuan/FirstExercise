#include<iostream>
using namespace std;


int main()
{
	double *a = NULL, *b=NULL ,*c= NULL;
	int n1,n2,n3,i1,i2,i3;

	cout << "n1=";
	cin >> n1;
	a = new double[n1];
	cout << "请按照升序输入，按Enter换行"<<endl;
	for (i1 = 0; i1 < n1; i1++)
		cin >> a[i1];

	
	cout << "n2=";
	cin >> n2;
	b = new double[n2];
	cout << "请按照从升序输入，按Enter换行"<<endl;
	for (i2 = 0; i2 < n2; i2++)
		cin >> b[i2];


	n3 = n1 + n2;
	c = new double[n3];
	i1 = 0, i2 = 0, i3 = 0;
	while (i1 < n1 && i2 < n2) 
	{
		if (a[i1] < b[i2]) 
		{
			c[i3] = a[i1];
			i1++;
		}
		else 
		{
			c[i3] = b[i2];
			i2++;
		}

		i3++;
	}
	while (i1 < n1)
	{
		c[i3] = a[i1];
		i1++;
		i3++;
	}
	while (i2 < n2) 
	{
		c[i3] = b[i2];
		i2++;
		i3++;
	}

	cout << "新的升序排列为：" << endl;
	for (int i6=0; i6 < n3 ; i6++)
		cout << c[i6] << " ";
	system("pause");
}

