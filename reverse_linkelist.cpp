#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int> *cur=head;
    LinkedListNode<int> *prev=NULL;
    LinkedListNode<int> *temp=cur;
    while( cur!=NULL){
       temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    } 
    return prev;
}
