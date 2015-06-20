/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    Node *curA = headA, *curB = headB;
    int lenA = 0, lenB = 0;
    while (curA != NULL) {
    	lenA ++;
    	curA = curA->next;
    }
    while (curB != NULL) {
    	lenB ++;
    	curB = curB->next;
    }
    curA = headA, curB = headB;
    int diff;
    if (lenA <= lenB) {
    	diff = lenB - lenA;
    	while (diff --) {
    		curB = curB->next;
    	}
    } else {
    	diff = lenA - lenB;
    	while (diff --) curA = curA->next;
    }
    while (curA != curB && curA != NULL) {
    	curA = curA->next;
    	curB = curB->next;
    }
    return curA->data;
}
