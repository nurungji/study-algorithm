#include <iostream>
#define HEAP_SIZE (100001)
#define SWAP(x, y) {int temp; temp = x; x=y; y = temp;}

using namespace std;

inline void upHeap();
inline void downHeap();

int n, currentSize;
int heapTree[HEAP_SIZE];

int main() {
	cin >> n;	
	while (n--) {
		int input;
		cin >> input;
		if (!input) { 
			cout << "answer:: " << heapTree[1] << endl;
			//cout << heapTree[1] << endl;
			if(heapTree[1] != 0) // ��Ʈ�� 0�̸� ���
				downHeap(); 
		}
		else {
			heapTree[++currentSize] = input;
			upHeap(); 
		}
	}
}

inline void downHeap() {
	int currentIdx = 1;

	// ��Ʈ�� ������ ��� Swap���� ��� �� ����
	heapTree[currentIdx] = heapTree[currentSize];
	heapTree[currentSize] = 0;

	// ��Ʈ ���� 0�� ��� ��� �ߴ��� �� ������ ���� ����
	if(heapTree[1] != 0)
		currentSize--;

	while (currentIdx < currentSize) {
		int left = heapTree[currentIdx * 2];
		int right = heapTree[(currentIdx * 2) + 1];
		
		if (left < right && left != 0) {
			if (left < heapTree[currentIdx]) {
				SWAP(heapTree[currentIdx * 2], heapTree[currentIdx]);
				currentIdx = currentIdx * 2;
			}
		} else if (left > right && right != 0) {
			if (right < heapTree[currentIdx]) {
				SWAP(heapTree[(currentIdx * 2) + 1], heapTree[currentIdx]);
				currentIdx = currentIdx * 2 + 1;
			}
		} else {
			break;
		}
	}
}

inline void upHeap() {
	int currentIdx = currentSize;
	while (currentIdx > 0) {
		if (heapTree[currentIdx / 2] < heapTree[currentIdx]
			|| (currentIdx / 2) == 0) {
			break;
		} else {			
			SWAP(heapTree[currentIdx], heapTree[currentIdx / 2]);
			currentIdx = currentIdx / 2;
		}
	}
}
