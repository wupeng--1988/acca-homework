#include<iostream>

using namespace std;

int  main()
{
	int n, s;
	cin >> n;
	while (n!=0 )
	{
		s = n % 10;
		n /= 10;
		if (n>=0)
		cout << s<<" ";
		else cout << s;
	}
	cout << endl;
	system("pause");
}