#include <iostream>
using namespace std;

char map[13][7];
char visitMap[13][7];
int posX[] = { -1, 0, 1, 0 };
int posY[] = { 0, -1, 0, 1 };

void algo(int y, int x);
inline bool isCharacter(int y, int x);
void printCmap();
int main() {
	// input
	for (int y = 1; y <= 12; y++) {
		for (int x = 1; x <= 6; x++) {
			cin >> map[y][x];			
			visitMap[y][x] = map[y][x];
		}
	}

	/*
	1. ���ڰ� ���ö� ���� üũ
	2. ���ڸ� ã���� 4�������� üũ.
	3. �ι�° �͵� ������ ��/�Ʒ��� üũ.
	4. 4���� �����ϰ�,
	5. ó������ �ٽ� üũ ����

	6. ������ �Լ� ����
	
	7. �ݺ�~!!
	8. ������ ���� ������ Ż��
	*/	
	while (1) {
		for (int y = 12; y >= 1; y--) {
			for (int x = 6; x >= 1; x--) {

				// 1 ~ 4 ����
				algo(y, x);
				printCmap();
				// 5 ���� (�������� �Ͼ�� ������ break)		
				//if (arrange()) {
				//	break;
				//}
			}
		}
	}
	return 0;
}

/*
�Ʒ����� ���� ã�ư���.
*/
int cntSame;
char currentAlpha;

void algo(int y, int x) {
	if (isCharacter(y, x)) { // ���ڸ� 2�� ����
		if (cntSame == 0) {
			currentAlpha = map[y][x];
		}
		visitMap[y][x] = '.';
		printCmap();
		cntSame++;
		for (int i = 0; i < 4; i++) {
			if (map[y][x] == map[y + posY[i]][x + posX[i]] 
				&& visitMap[y + posY[i]][x + posX[i]] != '.') { // �߰����� ������ ��												
				
				printCmap();
				algo(y + posY[i], x + posX[i]);				

			}
		}
		if (cntSame < 4) { // ����
			visitMap[y][x] = currentAlpha;
			printCmap();
			cntSame--;
			return;
		}		
	}		
}

inline bool isCharacter(int y, int x) {
	if (map[y][x] == '.')
		return false;
	return true;
}

void printCmap() {
	cout << endl;
	for (int y = 1; y <= 12; y++) {
		for (int x = 1; x <= 6; x++) {
			cout << visitMap[y][x];			
		}
		cout << endl;
	}
}