/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
    if (headA == NULL && headB == NULL) return 1;
    if (headA == NULL || headB == NULL) return 0;
    if (headA->data != headB->data) return 0;
    return CompareLists(headA->next, headB->next);
  // This is a "method-only" submission. 
  // You only need to complete this method 
}
