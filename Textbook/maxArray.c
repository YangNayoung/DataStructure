#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000000

int main() {
	// int a[SIZE] = {10};
	int *a = (int *)malloc(sizeof(int)*SIZE);
	a[0] = 10;
	printf("%d\n", a[0]);
	return 0;
}