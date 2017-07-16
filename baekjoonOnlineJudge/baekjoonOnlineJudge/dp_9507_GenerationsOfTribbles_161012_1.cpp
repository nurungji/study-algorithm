#include <iostream>
using namespace std;

int t, n;
long long arr[68] = {1,1,2,4};

int main() {		
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 4; i <= n; i++)
			arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3] + arr[i - 4];
		cout << arr[n] << endl;
	}
	return 0;
}