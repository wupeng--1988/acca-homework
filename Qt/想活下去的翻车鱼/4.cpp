#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int i, *p, j = 0;
	cin >> i;
	p = (int*) malloc(sizeof(int) * i);
	for(;j++ < i;p++)
		cin >> *p;
	for(j = i;j--;)
		cout << *(--p) << ' ';
	return 0;}
