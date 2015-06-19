/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
  int data;
  struct Node *next;
  }
*/
int HasCycle(Node* head)
{
    // Complete this function
    // Do not write the main method
    if (head == NULL) return 0;
    Node *slow = head, *fast = head;
    while (fast != NULL) {
        slow = slow->next;
        fast = fast->next;
        if (fast == NULL) return 0;
        fast = fast->next;
        if (fast == slow) return 1;
    }
    return 0;
}
