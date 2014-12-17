#include <iostream>

using namespace std;

int main(){
	int i;
	cin >> i;
	cout << (i % 5 && i % 3 ? "No" : "Yes");
	return 0;}
