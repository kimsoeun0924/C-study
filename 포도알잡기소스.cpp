#include<iostream>
using namespace std;

int main() {
	int choice;// �¼� ���� ���� ���� ����
	int seatChoice1;//���� ���� ���� ����
	int seatChoice2;//���� ���� ���� ����
	int theater[3][10]{};// �迭 �� �ʱ�ȭ
	
	while (1) {
		cout << "���� �¼� ���� �Ͻðڽ��ϱ�?(1�Ǵ�0)";
		cin >> choice;

		if (choice == 1) {
			cout << "���� �¼��� ������ �����ϴ�." << endl;
			cout << "-----------------------------------------------------" << endl;
			cout << "1 2 3 4 5 6 7 8 9 10" << endl;
			cout << "-----------------------------------------------------" << endl;

			for (seatChoice1 = 0; seatChoice1 < 3; seatChoice1++) { //2���� �迭 ���
				for (seatChoice2 = 0; seatChoice2 < 10; seatChoice2++) {
					cout << theater[seatChoice1][seatChoice2] << " "; 
				}
				cout << endl;
			}

			do {
				cout << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�?";
				cin >> seatChoice1 >> seatChoice2;

				if (theater[seatChoice1 - 1][seatChoice2 - 1] == 0) { // ������ �¼��� 0�� ��  
					theater[seatChoice1 - 1][seatChoice2 - 1] = 1;// ������ �¼� 0���� 1�� ǥ��
					cout << "����Ǿ����ϴ�." << endl;
					cout << "-----------------------------------------------------" << endl;
					cout << "1 2 3 4 5 6 7 8 9 10" << endl;
					cout << "-----------------------------------------------------" << endl;
					for (seatChoice1 = 0; seatChoice1 < 3; seatChoice1++) {
						for (seatChoice2 = 0; seatChoice2 < 10; seatChoice2++) {
							cout << theater[seatChoice1][seatChoice2] << " ";
						}
						cout << endl;
					}
					continue;// �� ó�� �ݺ������� �̵�
				}
				else
					cout << "�̹� ����� �ڸ��Դϴ�." << endl;
			} while (theater[seatChoice1 - 1][seatChoice2 - 1] == 1);// �¼��� ���� �� ������ �ݺ�


		}
		else if (choice == 0) {
			cout << "�¼� ���� ����";
			break;// �ݺ��� ����������(���α׷� ����)
		}
		else {
			cout << "1�Ǵ� 0���� �Է��ϼ���" << endl;// 0�Ǵ� 1 �̿ܿ� �� �Է½�  "1�Ǵ� 0���� �Է��ϼ���" ��� ��  ó�� �ݺ������� �̵�
		}
	}

}

