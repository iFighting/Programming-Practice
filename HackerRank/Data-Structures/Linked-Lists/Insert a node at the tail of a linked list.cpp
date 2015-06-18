/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *cnt = new Node();
    cnt->data = data;
    cnt->next = NULL;
    if (head == NULL) {
        return cnt;
    }
    Node *res = head;
    while (res->next!=NULL) {
        res = res->next;
    }
    res->next = cnt;
    return head;
  // Complete this method
}
