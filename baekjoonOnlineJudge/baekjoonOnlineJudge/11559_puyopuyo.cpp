#include <iostream>
using namespace std;

char map[13][7]; 
int posX[] = { -1, 0, 1, 0 };
int posY[] = { 0, -1, 0, 1 };

inline bool isCharacter(int y, int x);

int main() {
	// input
	for (int y = 1; y <= 12; y++)
		for (int x = 1; x <= 6; x++)
				cin >> map[y][x];

	/*
	1. ���ڰ� ���ö� ���� üũ
	2. ���ڸ� ã���� 4�������� üũ.
	3. �ι�° �͵� ������ ��/�Ʒ��� üũ.
	4. 4���� �����ϰ�,
	5. ������ �Լ� ����
	6. ó������ �ٽ� üũ ����
	7. �ݺ�~!!
	8. ������ ���� ������ Ż��
	*/
	int firstY = 1;
	int firstX = 1;

	while (1) {
		bool flag = true;
		for (int y = firstY; y <= 12; y++) {
			for (int x = firstX; x <= 6; x++) {		
				if () { // Ż�� ����
					break;
				}

				if (isCharacter(y, x)) { // ���ڸ� 2�� ����
					if (flag) { // ����ġ�� (ù��° ���� ã���� ������ ���� ���� �� �ʿ� ����)
						firstY = y; firstX = x; flag = false;
					}


					for (int i = 0; i < 4; i++) {
						if (map[y][x] == map[y + posY[i]][x + posX[i]]) { // �߰����� ������ ��
							
						}
					}
				}
			}
		}
	}
	return 0;
}

inline bool isCharacter(int y, int x) {
	if (map[y][x] == '.')
		return false;
	return true;
}