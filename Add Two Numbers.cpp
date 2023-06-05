/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *l1, Node *l2)
{
    // Write your code here.
    Node* dummy=new Node();
        Node*temp=dummy;
        int carry =0;
        while(l1!=NULL||l2!=NULL||carry){
            int sum=0;
            if(l1!=NULL){
                sum+=l1->data;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->data;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            Node *node=new Node(sum%10);
            temp->next=node;
            temp=temp->next;    
        }
        return dummy->next;
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
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* dummy=new ListNode();
//         ListNode*temp=dummy;
//         int carry =0;
//         while(l1!=NULL||l2!=NULL||carry){
//             int sum=0;
//             if(l1!=NULL){
//                 sum+=l1->val;
//                 l1=l1->next;
//             }
//             if(l2!=NULL){
//                 sum+=l2->val;
//                 l2=l2->next;
//             }
//             sum+=carry;
//             carry=sum/10;
//             ListNode *node=new ListNode(sum%10);
//             temp->next=node;
//             temp=temp->next;    
//         }
//         return dummy->next;
//     }
// };