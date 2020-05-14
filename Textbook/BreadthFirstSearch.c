#include <stdio.h>
#define SIZE 8
typedef enum { false, true } bool;
int front = 0, rear = -1;
int gueue[SIZE];
bool add(int index) {
	if (rear == SIZE) return false;
	gueue[++rear] = index;
	return true;
}
int delete(void) {
	if (front > rear) return -1;
	return gueue[front++];
}
void BreadFirstSearch(bool G[][SIZE], char V[]) {
	bool chk[SIZE] = { false };
	int i, j;
	char startV;
	printf("��� ���� : ");
	scanf_s("%c", &startV, 1);
	for (i = 0; i < SIZE; i++) if (startV == V[i]) break;
	printf("%c", startV); chk[i] = true;
	do {
		for (j = 0; j < SIZE; j++) {
			if (G[i][j] == 1 && chk[j] == 0) {
				printf("->%c", V[j]);
				chk[j] = 1;
				add(j);
			}
		}
		i = delete();
	} while (i >= 0);
	printf("\n");
}
int main(void) {
	bool G[SIZE][SIZE] = {
		{0,1,0,1,0,0,0,0},
		{1,0,0,0,1,0,1,0},
		{0,0,0,0,1,1,0,0},
		{1,0,0,0,0,1,0,0},
		{0,1,1,0,0,0,1,0},
		{0,0,1,1,0,0,0,1},
		{0,1,0,0,1,0,0,1},
		{0,0,0,0,0,1,1,0} };
	char V[] = { 'A','B','C','D', 'E', 'F', 'G', 'H' };
	int i, j;
	BreadFirstSearch(G, V);
	return 0;
}