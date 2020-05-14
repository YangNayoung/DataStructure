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
		printf("학번: ");
		scanf_s("%s", a[i].hakbun, 5); // scanf_s ("%s")는 공백까지 포함시키고 엔터할 때까지 들어감
		printf("성명: ");
		getchar();
		gets_s(a[i].name, 11); // fgets()는 _s 필요없음. ex) fgets(a[i].name,11,stdin); 엔터까지 들어감
		printf("나이: ");
		scanf_s("%d", &a[i].age);
	}

	for (i = 0; i < 3; i++) {
		printf("학번: %s, 성명: %s, 나이: %d\n", a[i].hakbun, a[i].name, a[i].age);
	}

	return 0;
}