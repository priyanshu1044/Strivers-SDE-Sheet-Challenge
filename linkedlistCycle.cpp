/**
 * Definition for singly-linked list.
 * struct Node {
 *     int val;
 *     Node *next;
 *     Node(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    Node *detectCycle(Node *head) {
        if(head==NULL||head->next==NULL){
            return NULL;
        }
        Node*slow=head;
        Node*fast=head;
        Node*entry=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                while(slow!=entry){
                    slow=slow->next;
                    entry=entry->next;
                }
                return entry;
            }
        }
        return NULL;
    }
};



Node *firstNode(Node *head)
{
    //    Write your code here.
    if(head==NULL||head->next==NULL){
            return NULL;
        }
        Node*slow=head;
        Node*fast=head;
        Node*entry=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                while(slow!=entry){
                    slow=slow->next;
                    entry=entry->next;
                }
                return entry;
            }
        }
        return NULL;
    }