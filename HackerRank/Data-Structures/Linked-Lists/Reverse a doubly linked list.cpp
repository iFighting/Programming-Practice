/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method.
    if (head == NULL || head->next == NULL) return head;
    Node *cur = head->next, *pre = head;
    pre->next = NULL;
    while (cur != NULL) {
      Node *temp = cur->next;
      pre->prev = cur;
      cur->next = pre;
      pre = cur;
      cur = temp;
    }
    pre->prev = NULL;
    return pre;
}
