#include <iostream>

using namespace std;

int n, sum;
int student[100];
int apple[100];

int main() {

	cin >> n;	

	for (int i = 0; i < n; i++) cin >> student[i] >> apple[i];
	for (int i = 0; i < n; i++) sum += apple[i] % student[i];

	cout << sum << endl;

	return 0;	
}