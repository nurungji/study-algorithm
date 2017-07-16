#include <iostream>
using namespace std;
int t, n;
int room[101];
int main() {
	
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; i++) // turn 1
			room[i] = 1;
		for (int i = 2; i <= n; i++) { // turns
			for (int j = 1; j <= n; j++) { 
				if (i*j > n)
					break;
				room[i*j] = (room[i*j] == 0) ? 1 : 0;
			}
		}
		int cnt = 0;
		for (int j = 1; j <= n; j++) {
			cnt += room[j];
		}
		cout << cnt << endl;
	}	
	return 0;
}