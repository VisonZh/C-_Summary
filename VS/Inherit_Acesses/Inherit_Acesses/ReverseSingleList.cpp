#include<iostream>
using namespace std;

static class Node;

class Node
{
public:
	Node *next;
	int data;
};

Node *reverseBuLoop(Node *head)
{
	if (NULL == head || NULL == head->next)
		return head;
	Node *next = NULL, *pre = NULL;
	while (NULL != head)
	{
		next = head->next;
		head->next = pre;
		pre = head;
		head = next;
	}
	return pre;
}

Node * reverseByRecusion(Node * head)
{
	if (NULL == head || NULL == head->next)
		return head;
	Node *NewHead = reverseByRecusion(head->next);

	head->next->next = head;
	head->next = NULL;

	return NewHead;
}