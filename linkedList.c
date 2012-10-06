#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	void* data;
	struct node *prev;
	struct node *next;
} node;

typedef struct linkedList {
	node *head;
} linkedList;

node* createNode() {
	node *new = malloc(sizeof(node));
	if (!new) {
		printf("Memory could not be allocated to a new node!\n");
		exit(1);
	}
	new->data = NULL;
	new->prev = NULL;
	new->next = NULL;
	return node;
}

linkedList *createLinkedList() {
	linkedList *new = malloc(sizeof(linkedList));
	if (!new) {
		printf("Memory could not be allocated to a new linked list!\n");
		exit(1);
	}
	new->head = NULL;
	return new;
}


node *insert(linkedList self, void *data)
{
	if (!self) {
		printf("No such linked list exists!\n");
		exit(1);
	}
	if (!self->head) {
		self->head = createNode();
		self->head->data = data;
	} else {

