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
LinkedListNode<int>* reverseList(LinkedListNode<int>* head){
        LinkedListNode<int>* pre=NULL;
        LinkedListNode<int>* next=NULL;
        while(head!=NULL){
            next=head->next;
            head->next=pre;
            pre=head;
            head=next;
        }
        return pre;
    }

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL||head->next==NULL){
            return true;
        }
        LinkedListNode<int>*slow =head,*fast=head;
        while (fast->next!=NULL&&fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverseList(slow->next);
        slow=slow->next;
        while(slow!=NULL){
            if(head->data!=slow->data){
                return false;
            }
            head=head->next;
            slow=slow->next;
        }
        return true;

}

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         if(head==NULL||head->next==NULL){
//             return true;
//         }
//         ListNode*slow =head,*fast=head;
//         while (fast->next!=NULL&&fast->next->next!=NULL)
//         {
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         slow->next=reverseList(slow->next);
//         slow=slow->next;
//         while(slow!=NULL){
//             if(head->val!=slow->val){
//                 return false;
//             }
//             head=head->next;
//             slow=slow->next;
//         }
//         return true;
//     }
//     ListNode* reverseList(ListNode* head){
//         ListNode* pre=NULL;
//         ListNode* next=NULL;
//         while(head!=NULL){
//             next=head->next;
//             head->next=pre;
//             pre=head;
//             head=next;
//         }
//         return pre;
//     }
// };