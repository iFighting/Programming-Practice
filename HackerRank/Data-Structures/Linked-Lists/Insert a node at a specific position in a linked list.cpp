/*
  Insert Node at a given position in a linked list 
  The linked list will not be empty and position will always be valid
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    Node *temp = new Node(), *cur = head;
    int r = 1;
    temp->data = data;
    if (position == 0) {
        temp->next = head;
        return temp;
    }
    while (r < position) {
        r ++;
        cur = cur->next;
    }
    Node *node = cur->next;
    cur->next = temp;
    temp->next = node;
    return head;
}
