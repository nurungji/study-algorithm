#include <iostream>

using namespace std;

int n, m, tmp, ans;
int relation[5001][5001];
bool visited[5001][5001];
int minSum;
int rCnt;

bool hasAns;

void dfs(int now, int goal) {
	
	if (now == goal) {
		hasAns = true;
		if (tmp > rCnt)
			tmp = rCnt;
		else if (tmp == 0)
			tmp = rCnt;

		return;
	}

	for (int next = 1; next <= m; next++) {

		if (next == now) continue;

		if (relation[now][next] == 1 && visited[now][next] == false) {
			
			visited[next][now] = true;
			visited[now][next] = true;
			
			rCnt++;

			dfs(next, goal);

			visited[next][now] = false;
			visited[now][next] = false;
			
			/*if (hasAns) return;*/
			
			rCnt--;
		}

	}
	
}

void solve(void) {

	for (int s = 1; s <= n; s++) {

		int sum = 0;

		for (int g = 1; g <= n; g++) {			
			tmp = 0; // rCnt중 작은 값 임시 저장
			rCnt = 0;
			hasAns = false;
			
			if (s == g) continue;

			dfs(s, g);

			sum += tmp;
		}	

		if (minSum > sum) {
			minSum = sum;
			ans = s;
		}
		else if (minSum == 0) {
			minSum = sum;
			ans = s;
		}
	}
}

int main() {

	#pragma warning(disable:4996)
	freopen("input.txt", "r", stdin);
	
	cin >> n >> m;

	// init

	for (int i = 1; i <= m; i++) {
		int a = 0; 
		int b = 0;
		cin >> a >> b;
		relation[a][b] = 1;
		relation[b][a] = 1;
	}

	solve();	

	cout << ans << endl;

	return 0;
}