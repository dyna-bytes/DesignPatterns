#ifndef __LINKEDLIST_H
#define __LINKEDLIST_H

typedef struct ListNode
{
	void *data;
	struct ListNode* prev;
	struct ListNode* next;
} ListNode;

ListNode* list_create(void *_data);
ListNode* list_insert(ListNode* _head, ListNode* new_node);
int list_erase(ListNode* head, void *_data);

#define list_for_each(pos, head) \
    for (pos = (head); pos != NULL; pos = pos->next)

#endif