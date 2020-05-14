#include <stdio.h>
#define SIZE 9

int cqueue[SIZE];
int rear = -1;
int front = 0;
int cnt = 0;

int add(int data) {
	if (cnt == SIZE) {
		printf("cQueue is full!\n");
		return -1;
	}
	cnt++;
	cqueue[++rear%SIZE] = data;
	return 0;
}

int delete(void) {
	if (cnt == 0) {
		printf("cQueue is empty!\n");
		return -1;
	}
	cnt--;
	return cqueue[front++%SIZE];
}

int main(void) {
	// int max = 3000000000;
	// printf("%d\n",max);

	add(5); add(10); add(15);
	add(20); add(25); add(30);
	add(35); add(40); add(45);
	add(50); // cQueue is full!

	printf("%d\n", delete()); // 5
	printf("%d\n", delete()); // 10
	printf("%d\n", delete()); // 15
	printf("%d\n", delete()); // 20
	printf("%d\n", delete()); // 25
	printf("%d\n", delete()); // 30
	printf("%d\n", delete()); // 35
	printf("%d\n", delete()); // 40
	printf("%d\n", delete()); // 45
	printf("%d\n", delete()); // cQueue is empty!  
							  // -1
	add(55); add(60); add(65);
	printf("%d\n", delete()); // 55

	return 0;
}