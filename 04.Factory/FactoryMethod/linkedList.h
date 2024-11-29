#ifndef __LINKEDLIST_H
#define __LINKEDLIST_H

typedef struct ListNode
{
	void *data;
	struct ListNode* prev;
	struct ListNode* next;
} ListNode;

ListNode* list_node_create(void *_data);
ListNode* list_node_insert(ListNode* _head, ListNode* new_node);
int list_node_erase(ListNode* head, void *_data);
ListNode* list_create(void);
void list_erase(ListNode* head);

#define list_for_each(pos, head) \
    for (pos = (head); pos != NULL; pos = pos->next)

#define container_of(ptr, type, member) \
    ((type *)((char *)(ptr) - offsetof(type, member)))

#endif