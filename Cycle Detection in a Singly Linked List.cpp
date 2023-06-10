/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

bool detectCycle(Node *head)
{
	//	Write your code here
    if(head==NULL||head->next==NULL){
            return false;
        }
        Node*slow=head;
        Node*fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
}



// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         if(head==NULL||head->next==NULL){
//             return false;
//         }
//         ListNode*slow=head;
//         ListNode*fast=head;
//         while(fast->next!=NULL&&fast->next->next!=NULL){
//             fast=fast->next->next;
//             slow=slow->next;
//             if(slow==fast){
//                 return true;
//             }
//         }
//         return false;
//     }
// };