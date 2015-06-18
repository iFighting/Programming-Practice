/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
    Node *pre = new Node(), *cur = pre;
    while (headA != NULL && headB != NULL) {
        if (headA->data <= headB->data) {
            cur->next = headA;
            headA = headA->next;
            cur = cur->next;
        } else {
            cur->next = headB;
            headB = headB->next;
            cur = cur->next;
        }
    }
    while (headA != NULL) {
        cur->next = headA;
        headA = headA->next;
        cur = cur->next;
    }
    while (headB != NULL) {
        cur->next = headB;
        headB = headB->next;
        cur = cur->next;
    }
    cur->next = NULL;
    return pre->next;
  // This is a "method-only" submission. 
  // You only need to complete this method 
}
