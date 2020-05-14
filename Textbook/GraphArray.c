#include <stdio.h>
#define SIZE 9

int main(void) {
	int G[SIZE][SIZE] = { {0,1,1,0,0,0,0,0,0}, // {0,30,50,0,0,0,0,0,0} 
						{1,0,0,1,1,0,0,0,0},   // {30,0,0,10,40,0,0,0,0}
						{1,0,0,1,0,0,0,1,0},   // {50,0,0,33,0,0,0,41,0}
						{0,1,1,0,0,1,1,0,0},   // {0,10,33,0,0,15,27,0,0}
						{0,1,0,0,0,1,0,0,1},   // {0,40,0,0,0,5,0,0,25}
						{0,0,0,1,1,0,0,0,0},   // {0,0,0,15,5,0,0,0,0}
						{0,0,0,1,0,0,0,1,1},   // {0,0,0,27,0,0,0,34,37}
						{0,0,1,0,0,0,1,0,0},   // {0,0,41,0,0,0,34,0,0},
						{0,0,0,0,1,0,1,0,0}    // {0,0,0,0,25,0,37,0,0}
	};
	char V[] = { 'A','B','G','H','C','I','E','F','D' };
	int i, j;
	for(i=0;i<SIZE;i++){
		for (j = 0; j < SIZE; j++) {
			printf("%3d", G[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < SIZE; i++)
		printf("%3c", V[i]);
	printf("\n");

	return 0;
}