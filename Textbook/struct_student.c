#include <stdio.h>

int main(void)
{
	struct student {
		char hakbun[5]; // 5
		char name[11]; // 11
		int age; // 4/20
	};
	struct student a[10]; // 20*10 = 200byte

	int i;
	for (i = 0; i < 3; i++) {
		printf("�й�: ");
		scanf_s("%s", a[i].hakbun, 5); // scanf_s ("%s")�� ������� ���Խ�Ű�� ������ ������ ��
		printf("����: ");
		getchar();
		gets_s(a[i].name, 11); // fgets()�� _s �ʿ����. ex) fgets(a[i].name,11,stdin); ���ͱ��� ��
		printf("����: ");
		scanf_s("%d", &a[i].age);
	}

	for (i = 0; i < 3; i++) {
		printf("�й�: %s, ����: %s, ����: %d\n", a[i].hakbun, a[i].name, a[i].age);
	}

	return 0;
}