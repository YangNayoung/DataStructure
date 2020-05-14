#include <stdio.h>
#define R 3

int b[R] = { 0, };
//int cnt = 0;

void Recom() {
	int i;

	//cnt++;
	for (i = 0; i < R; i++)
		printf("%5d", b[i]);
	printf("\n");
}

void Recombination(int a[], int r, int n, int ii) {
	int i;
	if (r == R) Recom();
	else for (i = ii; i < n; i++) {
		b[r] = a[i];
	Recombination(a, r + 1, n, i);
	}
}

int main(void) {
	int a[] = { 1,2,3,4,5 };
	int n = sizeof(a) / sizeof(int);

	Recombination(a, 0, n, -1);
	//printf("순열 개수: %d\n", cnt);

	return 0;
}