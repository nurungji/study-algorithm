#include <iostream>

using namespace std;

int n;
int a[50];
int b[50];
int ans;

int main() {

#pragma warning(disable:4996)
	freopen("input.txt", "r", stdin);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];		
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n -i-1; j++) {
			if (a[j] > a[j + 1]) {
				int tmp;
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n -i -1; j++) {
			if (b[j] < b[j + 1]) {
				int tmp;
				tmp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = tmp;
			}
		}
	}
	
	for (int i = 0; i < n; i++) {
		ans += a[i] * b[i];
	}

	cout << ans << endl;

	return 0;
}