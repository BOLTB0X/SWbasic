#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//���� ���۷� �ذ�
	//���� �ִ� �Է� ���۸� �׻� ����� ����
	int a;
	char c;
	scanf("%d", &a);
	printf("%d\n", a);
	int temp;
	//�� �ھ� �޾Ƽ� ������ ���̰ų� ���� ���ڸ� ������
	//�Է��� ���߹Ƿ� �׻� �Է� ���۸� ���
	while ((temp = getchar()) != EOF && temp != '\n') {}
	scanf("%c", &c);
	printf("%c\n", c);
	system("pause");
	return 0;
}