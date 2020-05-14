#include <stdio.h>

void ShellSort(int a[], int n) {
	int t, i, j, key;
	for (t = n / 2; t >= 1; t /= 2) {
		for (i = t; i < n; i++) {
			key = a[i];
			for (j = i - t; j >= 0; j-=t) {
				if (key >= a[j])break;
				a[j + t] = a[j];
			}
			a[j + t] = key;
		}
	}
}

int main(void) {
	int a[] = { 7,8,27,1,7,17,30,11,13,5,9,59,3 };
	int i, n = sizeof(a) / sizeof(int);

	printf("정렬 전: ");
	for (i = 0; i < n; i++) printf("%d ", a[i]);
	ShellSort(a, n);
	printf("\n삽입 정렬 후: ");
	for (i = 0; i < n; i++)printf("%d ", a[i]);
	printf("\n");
	return 0;
}