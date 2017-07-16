#include <iostream>
#include <fstream>
using namespace std;

int t, arr[1000], ans[1000], answer;

int main() {
		
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> arr[i];
				
		ans[i] = 1;		
		int max = 1;

		for (int j = i; j > -1; j--) {
			if (arr[i] > arr[j]) {
				int tmp = ans[j] + 1;
				if (tmp > max)
					max = tmp;
			}
		}
		ans[i] = max;
		if (ans[i] > answer)
			answer = ans[i];
	}		
	cout << answer << endl;

	return 0;
}