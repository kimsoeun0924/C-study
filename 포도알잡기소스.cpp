#include<iostream>
using namespace std;

int main() {
	int choice;// 좌석 선택 여부 변수 선언
	int seatChoice1;//행의 길이 변수 선언
	int seatChoice2;//열의 길이 변수 선언
	int theater[3][10]{};// 배열 값 초기화
	
	while (1) {
		cout << "극장 좌석 예약 하시겠습니까?(1또는0)";
		cin >> choice;

		if (choice == 1) {
			cout << "현재 좌석은 다음과 같습니다." << endl;
			cout << "-----------------------------------------------------" << endl;
			cout << "1 2 3 4 5 6 7 8 9 10" << endl;
			cout << "-----------------------------------------------------" << endl;

			for (seatChoice1 = 0; seatChoice1 < 3; seatChoice1++) { //2차원 배열 출력
				for (seatChoice2 = 0; seatChoice2 < 10; seatChoice2++) {
					cout << theater[seatChoice1][seatChoice2] << " "; 
				}
				cout << endl;
			}

			do {
				cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까?";
				cin >> seatChoice1 >> seatChoice2;

				if (theater[seatChoice1 - 1][seatChoice2 - 1] == 0) { // 선택한 좌석이 0일 때  
					theater[seatChoice1 - 1][seatChoice2 - 1] = 1;// 선택한 좌석 0에서 1로 표시
					cout << "예약되었습니다." << endl;
					cout << "-----------------------------------------------------" << endl;
					cout << "1 2 3 4 5 6 7 8 9 10" << endl;
					cout << "-----------------------------------------------------" << endl;
					for (seatChoice1 = 0; seatChoice1 < 3; seatChoice1++) {
						for (seatChoice2 = 0; seatChoice2 < 10; seatChoice2++) {
							cout << theater[seatChoice1][seatChoice2] << " ";
						}
						cout << endl;
					}
					continue;// 맨 처음 반복문으로 이동
				}
				else
					cout << "이미 예약된 자리입니다." << endl;
			} while (theater[seatChoice1 - 1][seatChoice2 - 1] == 1);// 좌석이 예약 될 때까지 반복


		}
		else if (choice == 0) {
			cout << "좌석 예약 종료";
			break;// 반복문 빠져나오기(프로그램 종료)
		}
		else {
			cout << "1또는 0번만 입력하세요" << endl;// 0또는 1 이외에 값 입력시  "1또는 0번만 입력하세요" 출력 후  처음 반복문으로 이동
		}
	}

}

