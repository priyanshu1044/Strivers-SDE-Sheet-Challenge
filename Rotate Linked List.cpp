Node *rotate(Node *head, int k) {
     if(head==NULL||head->next==NULL||k==0)
     {
          return head;
     }
     Node *cur=head;
     int len=1;
     while(cur->next)
     {
          ++len;
          cur=cur->next;
     }
     cur->next=head;
     k=k%len;
     k=len-k;
     while(k--)
     {
          cur=cur->next;
     }
     head=cur->next;
     cur->next=NULL;
     return head;
     // Write your code here.
}