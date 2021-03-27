#include <iostream>
#include <string>
using namespace std;// std 생략하기 위해 사용

int main() {
	int apple, banana, orange;//과일 가격 선언
	int ap, bp, op;// 과일 갯수 선언
	int sum; // 총 합 선언

	cout << "당신의 이름은 무엇입니까?"; //"당신의 이름은 무엇입니까?"가 출력됩니다.
	string name;//크기 상관없음
	getline(cin, name);//사용자에게  이름 값을 받습니다.(입력 중간 띄어쓰기를 표기하기 위해 getline 사용 )
	cout << "반갑습니다." << name << "님" << endl;//사용자에게 입력 받은 이름 값을 대입한 문장이 출력, endl 줄바꿈

	cout << "apple의 가격은 얼마입니까?";
	cin >> apple;
	cout << "banana의 가격은 얼마입니까?";
	cin >> banana;
	cout << "orange의 가격은 얼마입니까?";
	cin >> orange;
	cout << "apple은 몇 개 있습니까?";
	cin >> ap;
	cout << "banana는 몇 개 있습니까?";
	cin >> bp;
	cout << "orange은 몇 개 있습니까?"; 
	cin >> op;

	sum = (apple * ap) + (banana * bp) + (orange * op) - 500;
	cout << "총" << sum << " 입니다.";
	return 0;//return 실행되면 main() 종료, 프로그램 종료
}