#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node *llink; // 4byte
	char data; // 1byte
	struct node *rlink; // 4byte
};

void preOrder(struct node *p) {
	if (p != NULL) {
		printf("%c  ", p->data);
		preOrder(p->llink);
		preOrder(p->rlink);
	}
}

void inOrder(struct node *p) {
	if (p != NULL) {
		inOrder(p->llink);
		printf("%c  ", p->data);
		inOrder(p->rlink);
	}
}

void postOrder(struct node *p) {
	if (p != NULL) {
		postOrder(p->llink);
		postOrder(p->rlink);
		printf("%c  ", p->data);
	}
}

int main(void) {
	struct node *root;
	root = (struct node *)malloc(sizeof(struct node));
	root->data = 'A';
	root->llink = (struct node *)malloc(sizeof(struct node));
	root->rlink = (struct node *)malloc(sizeof(struct node));
	root->llink->data = 'B';
	root->rlink->data = 'C';
	root->llink->llink = (struct node *)malloc(sizeof(struct node));
	root->llink->rlink = (struct node *)malloc(sizeof(struct node));
	root->llink->llink->data = 'D';
	root->llink->rlink->data = 'E';
	root->llink->llink->llink = NULL;
	root->llink->llink->rlink = (struct node *)malloc(sizeof(struct node));
	root->llink->llink->rlink->data = 'G';
	root->llink->llink->rlink->llink = NULL;
	root->llink->llink->rlink->rlink = NULL;
	root->llink->rlink->llink = NULL;
	root->llink->rlink->rlink = NULL;
	root->rlink->llink = NULL;
	root->rlink->rlink = (struct node *)malloc(sizeof(struct node));
	root->rlink->rlink->data = 'F';
	root->rlink->rlink->llink = (struct node *)malloc(sizeof(struct node));
	root->rlink->rlink->rlink = (struct node *)malloc(sizeof(struct node));
	root->rlink->rlink->llink->data = 'H';
	root->rlink->rlink->llink->llink = NULL;
	root->rlink->rlink->llink->rlink = NULL;
	root->rlink->rlink->rlink->data = 'I';
	root->rlink->rlink->rlink->llink = NULL;
	root->rlink->rlink->rlink->rlink = NULL;
	
	preOrder(root);
	printf("\n"); // A  B  D  G  E  C  F  H  I

	inOrder(root);
	printf("\n"); // D  G  B  E  A  C  H  F  I

	postOrder(root);
	printf("\n"); // G  D  E  B  H  I  F  C  A

	return 0;
}