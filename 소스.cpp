#include <iostream>
#include <string>
using namespace std;// std namespace 사용

int main() {
	int apple, banana, orange;//사과 가격, 바나나 가격, 오렌지 가격 변수 선언
	int ap, bp, op;// 사과 수, 바나나 수, 오렌지 수 변수 선언
	int 합; // 총 합 변수 선언

	cout << "당신의 이름은 무엇입니까?"; //"당신의 이름은 무엇입니까?"가 출력됩니다.
	string name;//크기 상관없음
	getline(cin, name);//사용자에게  이름 값을 받습니다.
	cout << "반갑습니다." << name << "님" << endl;//사용자에게 입력 받은 이름 값을 대입한 문장이 출력, endl 줄바꿈

	cout << "apple의 가격은 얼마입니까?";// apple의 가격은 얼마입니까?가 출력됩니다.
	cin >> apple;//사용자에게 사과 가격의 값을 받습니다.
	cout << "banana의 가격은 얼마입니까?";//banana의 가격은 얼마입니까?가 출력됩니다.
	cin >> banana;// 사용자에게 바나나 가격의 값을 받습니다.
	cout << "orange의 가격은 얼마입니까?";//orange의 가격은 얼마입니까?가 출력됩니다.
	cin >> orange;// 사용자에게 오렌지 가격의 값을 받습니다.

	cout << "apple은 몇 개 있습니까?";//apple은 몇 개 있습니까?가 출력 됩니다.
	cin >> ap;// 사용자에게 사과의 갯수 값을 받습니다.
	cout << "banana는 몇 개 있습니까?";// banana는 몇 개 있습니까?가 출력됩니다.
	cin >> bp;// 사용자에게 바나나의 갯수 값을 받습니다.
	cout << "orange은 몇 개 있습니까?"; // orange은 몇 개 있습니까 ?가 출력됩니다.
	cin >> op;// 사용자에게 오렌지의 갯수 값을 받습니다.

	합 = (apple * ap) + (banana * bp) + (orange * op) - 500;
	cout << "총" << 합 << " 입니다.";
	return 0;//return 실행되면 main() 종료, 프로그램 종료
}