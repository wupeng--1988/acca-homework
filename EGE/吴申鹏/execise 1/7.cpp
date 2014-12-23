#include<iostream>

using namespace std;

int main()
{
	int n, a[100],i=0,j,ta,ta_1;
	cin >> n;
	while (i < n)
		cin >> a[i++];
	for (i = 0; i < n; i++)
	{
		ta = i;
		for (j = i + 1; j < n; j++)
			if (a[ta]>a[j])
				ta = j;
			if (ta != i)
			{
				ta_1 = a[i];
				a[i] = a[ta];
				a[ta] = ta_1;
			}
	}
	for (i = 0; i < n-1; i++)
		cout << a[i]<<" ";
	cout << a[i] << endl;
	system("pause");
}