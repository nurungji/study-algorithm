#include <iostream>

using namespace std;

int t, before, after;
int queue[9999999], h, t;

int main() {
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> before >> after;
	}

	while (1) {

		for (int i = 1; i <= 9; i++) {
			if (isPossible(before + 1000 * i)) {

			}
			if (isPossible(before + 100 * i)) {

			}
			if (isPossible(before + 10 * i)) {

			}
			if (isPossible(before + i)) {

			}


		}	
	}
}

void enqueue(int n) {
	t++;
}

bool isPossible(int n) {
	if (n < 1000) {
		return false;
	}
	else {
		for (int i = 2; i <= n - 1; i++) {
			if (n%i == 0) {
				return false;
			}
		}
	}
	return true;
}