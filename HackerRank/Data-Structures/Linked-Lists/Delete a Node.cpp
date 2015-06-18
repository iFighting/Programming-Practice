/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    if (position == 0) {
        if (head == NULL) return NULL;
        else return head->next;
    }
    int r = 1;
    Node *cur = head;
    while (r < position) {
        r ++;
        cur = cur->next;
    }
    Node *temp = cur->next->next;
    cur->next = temp;
    return head;
}
