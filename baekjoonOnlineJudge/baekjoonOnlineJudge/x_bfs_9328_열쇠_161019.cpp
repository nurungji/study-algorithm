#include <iostream>
#pragma warning(disable:4996)

using namespace std;

int t, h, w;
char map[100][100];
char key[100];

typedef struct person {
	int x;
	int y;
	int goal;
} sanguen;

sanguen queue[100 * 1024 * 1024 / 12];
int front, rear;

void enqueue(sanguen sang) {
	queue[rear++] = sang;
}

sanguen dequeue() {
	return queue[front++];
}

bool isEmpty() {
	if (front == rear) {
		return true;
	}
	return false;
}

bool isObs() {
	return false;
}

int main() {
	
	freopen("input.txt", "r", stdin);

	cin >> t;
	while (t--) {

		// input
		cin >> h >> w;
		for (int y = 0; y < h; y++) {		
			cin >> map[y];			
		}
		for (int y = 0; y < 100; y++) {
			cin >> key[y];			
		}

		// algo
		for (int iy = 0; iy < h; iy++) {
			for (int ix = 0; ix < w; ix++) {
				if(map[0][ix] == '.' || )
			}
		}


	}


}