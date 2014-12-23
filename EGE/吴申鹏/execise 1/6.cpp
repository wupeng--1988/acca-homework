#include<iostream>

using namespace std;

int main()
{
	int n,i,t=0;
	cin >> n;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			cout << "Yes" << endl;
			goto loop1;
		}
	}
		cout << "No" << endl;
loop1:	system("pause");
}