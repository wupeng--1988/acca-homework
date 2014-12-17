#include <iostream>

using namespace std;

int main(){
	int i;
	cin >> i;
	cout << ((bool)(i % 5) xor (bool)(i % 3) ? "Yes" : "No");
	return 0;}
