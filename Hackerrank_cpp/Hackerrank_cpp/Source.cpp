#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n, t;

int tenToTwo(int num) {
	int result = 0;
	for(int i = 1; num > 0; i *= 10) {
		int tmp = num % 2;
		result += tmp * i;
		num /= 2;
	}
	return result;
}

int twoToTen(int num) {
	int result = 0, mul = 1;
	while (num > 0) {
		if (num % 2)
			result += mul;
		mul *= 2;
		num /= 10;
	}
	return result;
}

int main() {

	cin >> n;
	while (n--) {
		cin >> t;

		int binary = tenToTwo(t);
		cout << "32bit:: " << binary << endl;
		int flip = ~binary;
		cout << twoToTen(flip) << endl;
	}	
	return 0;
}
