#include <iostream>

using namespace std;

int n;
double budget;

int cal[5000];
double pri[5000];
int dpt[10001];

typedef pair<int, int> c;
c cd[10];

int dfs(int curCal, int curMoney) {
	
	int dCal = dpt[curMoney];

	if (dCal != 0)
		return dCal;

	dCal = curCal;

	for (int i = 0; i < n; i++) {

		if (pri[i] > curMoney) continue;		

		int tmp = dfs(curCal + cal[i], curMoney - pri[i]);
		dCal = (dCal > tmp) ? dCal : tmp;
	}
	return dCal;
}

int main() {

#pragma warning(disable:4996)
	freopen("input.txt", "r", stdin);

	while (1) {

		cin >> n >> budget;
		
		if (n == 0 && budget == 0.00) break;

		for (int i = 0; i < n; i++) {
			cin >> cal[i] >> pri[i];
		}

		int maxCalory = dfs(0, (int)(budget * 100 + 0.5));

		cout << maxCalory << endl;
	}

	return 0;
}