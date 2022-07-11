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
int length(LinkedListNode<int> *head){
    int ct=0;
    while(head!=NULL){
        head=head->next;
        ct++;
    }
    return ct;
}
LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K)
{
    // Write your code here.
    int l=length(head);
    int ct=l-K;
    if(K==0)return head;
    if(l==0)return NULL;
    LinkedListNode<int> *temp=head;
    LinkedListNode<int> *prev=temp;
    if(ct==0){
        prev=temp->next;
        delete temp;
        return prev;
    }
    while(ct){
        prev=temp;
        temp=temp->next;
        ct--;
    }
    prev->next=temp->next;
    delete temp;
    return head;
}
