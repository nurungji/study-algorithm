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
	1. 문자가 나올때 까지 체크
	2. 문자를 찾으면 4방향으로 체크.
	3. 두번째 것도 같으면 위/아래로 체크.
	4. 4개면 삭제하고,
	5. 재정렬 함수 실행
	6. 처음부터 다시 체크 시작
	7. 반복~!!
	8. 끝까지 가도 없으면 탈출
	*/
	int firstY = 1;
	int firstX = 1;

	while (1) {
		bool flag = true;
		for (int y = firstY; y <= 12; y++) {
			for (int x = firstX; x <= 6; x++) {		
				if () { // 탈출 조건
					break;
				}

				if (isCharacter(y, x)) { // 문자면 2번 시작
					if (flag) { // 가지치기 (첫번째 문자 찾으면 앞으로 위에 줄은 볼 필요 없음)
						firstY = y; firstX = x; flag = false;
					}


					for (int i = 0; i < 4; i++) {
						if (map[y][x] == map[y + posY[i]][x + posX[i]]) { // 중간값과 같은지 비교
							
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