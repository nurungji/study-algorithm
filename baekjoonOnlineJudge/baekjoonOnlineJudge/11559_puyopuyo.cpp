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
	1. 문자가 나올때 까지 체크
	2. 문자를 찾으면 4방향으로 체크.
	3. 두번째 것도 같으면 위/아래로 체크.
	4. 4개면 삭제하고,
	5. 처음부터 다시 체크 시작

	6. 재정렬 함수 실행
	
	7. 반복~!!
	8. 끝까지 가도 없으면 탈출
	*/	
	while (1) {
		for (int y = 12; y >= 1; y--) {
			for (int x = 6; x >= 1; x--) {

				// 1 ~ 4 수행
				algo(y, x);
				printCmap();
				// 5 수행 (재정렬이 일어나지 않으면 break)		
				//if (arrange()) {
				//	break;
				//}
			}
		}
	}
	return 0;
}

/*
아래에서 부터 찾아간다.
*/
int cntSame;
char currentAlpha;

void algo(int y, int x) {
	if (isCharacter(y, x)) { // 문자면 2번 시작
		if (cntSame == 0) {
			currentAlpha = map[y][x];
		}
		visitMap[y][x] = '.';
		printCmap();
		cntSame++;
		for (int i = 0; i < 4; i++) {
			if (map[y][x] == map[y + posY[i]][x + posX[i]] 
				&& visitMap[y + posY[i]][x + posX[i]] != '.') { // 중간값과 같은지 비교												
				
				printCmap();
				algo(y + posY[i], x + posX[i]);				

			}
		}
		if (cntSame < 4) { // 복구
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