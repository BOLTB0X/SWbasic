#include <iostream>
#include <string>

using namespace std;
//�⺻������(Default Constructor)
//�⺻�����ڴ� �Ű������� ������ ����
//�ɹ������� 0,NULL���� ������ �ʱ�ȭ
//Ŭ������ ������ �̸��� �޼ҵ�
class Character { //���� Ŭ����
private:
	string name;
	int ragePoint;
	int hp;
	int damage;
public:
	void show() {
		cout << name << " [ " << ragePoint << " ]  "<< hp << " " << damage << "\n";
	}
};

int main(void) {
	Character character = Character(); //������ �����ڸ� �������� ������
	character.show(); //0���� ���
	system("pause");
}