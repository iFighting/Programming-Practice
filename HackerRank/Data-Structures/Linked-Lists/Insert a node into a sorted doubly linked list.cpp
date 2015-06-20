/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/

Node* SortedInsert(Node *head,int data) {
    Node *node = new Node();
    node->data = data;
    node->next = node->prev = NULL;
    if (head == NULL) {
      return node;
    }
    Node *cur = head;
    if (cur->data >= data) {
      node->next = cur;
      cur->prev = node;
      return node;
    }
    while ( cur->next != NULL && cur->next->data < data) {
      cur = cur->next;
    }
    Node *temp = cur->next;
    cur->next = node;
    node->prev = cur;
    node->next = temp;
    if (temp != NULL) temp->prev = node;
    return head;
}
