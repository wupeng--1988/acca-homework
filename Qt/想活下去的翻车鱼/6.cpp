#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int i;
	cin >> i;
	if(!(i % 2)){
		cout << "No";
		return 0;}
 	double t = sqrt((double)i);
	for(int k = 3;k <= t;k += 2){
		if(!(i % k)){
			cout << "No";
			return 0;}}
	cout << "Yes";
	return 0;}
