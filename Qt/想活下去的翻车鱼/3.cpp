#include <iostream>
#include <math.h>

using namespace std;

int main(){
	double i;
	cin >> i;
	cout << (i > 2 ? (ceil(i) - 2) * 3 : 0) + 5;
	return 0;}
