#include<iostream>

using namespace std;

void swap(int *m, int *n)
{
	int t;
	t = *m;
	*m = *n;
	*n = t;
}
int main()
{
	int m, n;
	cin >> m >> n;
	swap(&m, &n);
		cout << m<<"\t" << n << endl;
		system("pause");
}