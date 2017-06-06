/*
We expect this question to take approximately 20-40 minutes.

Write a function to swap any two nodes in a singly-linked list. Assume you do not have access to
the data componment of the elements (and thus you cannot just swap the data).

Below is an example of a possible Node data type. You may use this definition or another of your
choosing.

struct Node
{
	Node* next;
	Data data;
};
*/

#include <iostream>

struct Node //using same node struct example from question. made data an int.
{
	Node* next;
	int data;
};

void swapNodes(int *a, int *b) 
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void performSwap(Node* head)
{
	Node* temp = head;

	while (temp != NULL && temp->next != NULL)
	{
		swapNodes(&temp->data, &temp->next->data);
		temp = temp->next->next;
	}
}

void pushToList(Node** head, int data)
{     
	Node* newNode = (Node*)malloc(sizeof(Node)); 
	newNode->data = data;
	newNode->next = (*head);
	(*head) = newNode;
}

void printLinkedList(Node* node)
{
	while (node != NULL)
	{
		printf("%d", node->data);
		node = node->next;
	}
}

int main()
{
	Node* start = NULL;

	pushToList(&start, 6);
	pushToList(&start, 5);
	pushToList(&start, 4);
	pushToList(&start, 3);
	pushToList(&start, 2);
	pushToList(&start, 1);

	printf("Linked list before data swap.\n");
	printLinkedList(start); //prints out 123456
	
	performSwap(start);

	printf("\n\nLinked list after data swap.\n");
	printLinkedList(start); //prints out 214365

	printf("\n\n");
	system("pause");
	return 0;
}