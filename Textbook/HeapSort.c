#include <stdio.h>
#include <limits.h>

void HeapSort(int a[], int n) {
	int i, parent, child, value;
	for (i = n / 2; i >= 1; i--) {
		parent = i;
		value = a[i];
		while ((child = parent * 2) <= n) {
			if (child + 1 <= n && a[child] < a[child + 1])
				child++;
			if (value >= a[child])
				break;
			a[parent] = a[child];
			parent = child;
		}
		a[parent] = value;
	}
	while (n > 1) {
		value = a[n];
		a[n--] = a[1];
		parent = 1;
		while ((child = parent * 2) <= n) {
			if (child + 1 <= n && a[child] < a[child + 1])
				child++;
			if (value >= a[child])
				break;
			a[parent] = a[child];
			parent = child;
		}
		a[parent] = value;
	}
}

int main(void) {
	int a[] = { INT_MIN,10,7,1,18,6,3,15,11,12,25,17,48 };
	int i, n = sizeof(a) / sizeof(int);
	printf("Èü Á¤·Ä Àü: ");
	for (i = 1; i < n; i++)
		printf("%d  ", a[i]);
	HeapSort(a, n - 1);
	printf("\nÈü Á¤·Ä ÈÄ: ");
	for (i = 1; i < n; i++)
		printf("%d  ", a[i]);
	printf("\n");
	return 0;
}