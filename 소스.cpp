#include <iostream>
#include <string>
using namespace std;// std �����ϱ� ���� ���

int main() {
	int apple, banana, orange;//���� ���� ����
	int ap, bp, op;// ���� ���� ����
	int sum; // �� �� ����

	cout << "����� �̸��� �����Դϱ�?"; //"����� �̸��� �����Դϱ�?"�� ��µ˴ϴ�.
	string name;//ũ�� �������
	getline(cin, name);//����ڿ���  �̸� ���� �޽��ϴ�.(�Է� �߰� ���⸦ ǥ���ϱ� ���� getline ��� )
	cout << "�ݰ����ϴ�." << name << "��" << endl;//����ڿ��� �Է� ���� �̸� ���� ������ ������ ���, endl �ٹٲ�

	cout << "apple�� ������ ���Դϱ�?";
	cin >> apple;
	cout << "banana�� ������ ���Դϱ�?";
	cin >> banana;
	cout << "orange�� ������ ���Դϱ�?";
	cin >> orange;
	cout << "apple�� �� �� �ֽ��ϱ�?";
	cin >> ap;
	cout << "banana�� �� �� �ֽ��ϱ�?";
	cin >> bp;
	cout << "orange�� �� �� �ֽ��ϱ�?"; 
	cin >> op;

	sum = (apple * ap) + (banana * bp) + (orange * op) - 500;
	cout << "��" << sum << " �Դϴ�.";
	return 0;//return ����Ǹ� main() ����, ���α׷� ����
}