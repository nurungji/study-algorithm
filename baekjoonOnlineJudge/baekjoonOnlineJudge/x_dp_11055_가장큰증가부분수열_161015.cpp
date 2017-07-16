#include <iostream>
using namespace std;

int n, arr[1000], sum[1000], ans;

int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		for (int j = i; j > -1; j--) {
			if (arr[i] > arr[j]) {
				sum[i] = sum[i] + sum[j];
				if (ans < sum[i])
					ans = sum[i];				
			}
			else {
				sum[i] = arr[i];
				if (ans < sum[i])
					ans = sum[i];				
			}
			break;
		} 
	}
	cout << ans << endl;
	return 0;
}