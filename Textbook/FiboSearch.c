#include <stdio.h>

int fiboSearch(int a[], int key, int n) {
	int fibo[] = { 0,1,1,2,3,5,8,13,21,34,55 };
	int pos, index = 0, k = 0;

	while (fibo[k] < n) k++;
	while (k > 0) {
		pos = index + fibo[--k];
		if (pos >= n || key < a[pos]);
		else if (key > a[pos]) {
			index = pos;
			k--;
		}
		else return pos;
	}
	return -1;
}

int main(void) {
	int a[] = { 10,16,19,21,27,30,35,39,42,51,88,89 };
	int n = sizeof(a) / sizeof(int);
	int index, key;

	index = fiboSearch(a, key, n);

}