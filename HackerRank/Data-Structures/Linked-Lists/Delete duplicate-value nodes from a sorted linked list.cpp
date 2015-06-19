/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
  int data;
  struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
	if (head == NULL || head->next == NULL) return head;
	int cur = head->data;
	Node *cnt = head->next, *pre = head;
	while (cnt != NULL) {
		if (cnt->data != cur) {
			pre->next = cnt;
			pre = pre->next;
			cur = cnt->data;
		}
		cnt = cnt->next;
	}
	pre->next = NULL;
	return head;
    // This is a "method-only" submission. 
    // You only need to complete this method. 
}
