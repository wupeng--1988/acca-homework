#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int n;
	cin >> n;
	if (n % 3 == 0 && n % 5 == 0)
		cout << "Yes" << endl;
	else cout << "No" << endl;
	system("pause");
}