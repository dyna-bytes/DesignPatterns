#include <stdio.h>
#include <malloc.h>
#include "linkedList.h"

ListNode* list_node_create(void *_data)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));

	node->prev = NULL;
	node->next = NULL;

	node->data = _data;

	return node;
}

inline ListNode* list_create(void) {
	return list_node_create(NULL);
}

ListNode* list_node_insert(ListNode* _head, ListNode* new_node)
{
	ListNode* next = _head->next;

	_head->next = new_node;
	new_node->next = next;
	new_node->prev = _head;

	if (next != NULL)
		next->prev = new_node;

	return new_node;
}

int list_node_erase(ListNode* head, void *_data)
{
	ListNode* it = head->next;
	int ret = 0;

	while (it != NULL) {
		if (it->data == _data) {
			ListNode* prev = it->prev;
			ListNode* next = it->next;
			ListNode* curr = it;
			it = it->next;

			prev->next = next;
			if (next != NULL)
				next->prev = prev;

			free(curr);
			ret++;
		} else
			it = it->next;
	}

	return ret;
}

void list_erase(ListNode* head) {
	ListNode* it;
	for (it = head; it != NULL; ) {
		ListNode* next = it->next;
		ListNode* curr = it;
		it = it->next;

		if (next != NULL)
			next->prev = NULL;

		free(curr);
	}
}