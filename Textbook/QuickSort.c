#include <stdio.h>

void QuickSort(int *a, int low, int high) {
	int i, j, key, temp;

	if (low < high) {
		key = a[low];
		i = low;
		j = high;
		while (i < j) {
			while (i < high && a[i] <= key)i++;
			while (j > low && a[j] >= key)j--;
			if (i < j) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}

		a[low] = a[j];
		a[j] = key;

		QuickSort(a, low, j - 1);
		QuickSort(a, j + 1, high);
	}
}

int main(void) {
	int a[] = { 15,7,2,20,33,17,26,5,21,30,27,29,11,10,3 };
	int i, n = sizeof(a) / sizeof(int);

	printf("정렬 전: ");
	for (i = 0; i < n; i++)
		printf("%d  ", a[i]);
	QuickSort(a, 0, n - 1);
	printf("\n퀵 정렬 후: ");
	for (i = 0; i < n; i++)
		printf("%d  ", a[i]);
	printf("\n");

	return 0;
}
