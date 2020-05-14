#include <stdio.h>

int main()
{
	int a[4][5] = { {3,56,2,17,19},
					{32,28,7,5,41},
					{1,4,45,18,56},
					{58,72,81,90,91} };
	int b[4][5] = { 0 };
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <5; j++) {
			b[3 - i][4 - j] = a[i][j];
		}
	}
	/*
	for (int i = 3; i < 0=; i--) {
		for (int j = 4; j <=0; j--) {
			b[3 - i][4 - j] = a[i][j];
		}
	}
	*/

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
}