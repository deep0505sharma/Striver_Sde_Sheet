#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/
int length(Node* head){
    int ct=0;
    while(head!=NULL){
        head=head->next;
        ct++;
    }
    return ct;
}
Node *findMiddle(Node *head) {
    // Write your code here
    int n=length(head);
    int p=n/2;
    while(p--){
       head=head->next;
    }
    return head;
}
