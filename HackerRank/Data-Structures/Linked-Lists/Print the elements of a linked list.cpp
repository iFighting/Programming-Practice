/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
    if (head == NULL) return;
    while (head != NULL) {
        cout << head->data << endl;
        head = head->next;
    }
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}
