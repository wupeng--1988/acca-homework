#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	char ch;
	cin >> ch;
	if (ch >= 'a'&&ch <= 'z')
		cout << "Yes" << endl;
	else cout << "No" << endl;
	system("pause");
}