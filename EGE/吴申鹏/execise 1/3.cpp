#include<iostream>

using namespace std;

int main()
{
	float price,n;
	cin >> n;
	n = ((int)n != n) ? (int)n + 1 : (int)n;
	if (n <= 2) price = 5;
	else price = 5 + (n - 2) * 3;
	cout << price << endl;
	cout << n<<'\n';
	system("pause");
}