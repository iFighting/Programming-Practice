/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    if (head == NULL || head->next == NULL) return head;
    Node *cur , *cnt = NULL;
    while (head != NULL) {
        Node *temp = head->next;
        head->next = cnt;
        cnt = head;
        head = temp;
    }
    return cnt;
  // Complete this method
}
