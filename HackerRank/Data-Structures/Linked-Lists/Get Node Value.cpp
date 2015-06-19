/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    Node *cnt = head;
    int r = 0;
    while (r < positionFromTail) {
        cnt = cnt->next;
        r ++;
    }
    while (cnt->next != NULL) {
        cnt = cnt->next;
        head = head->next;
    }
    return head->data;
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}
