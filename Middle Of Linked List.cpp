/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slowT=head;
        ListNode* fastT=head;
        while (fastT!=NULL||fastT->next!=NULL)
        {
            slowT=slowT->next;
            fastT=fastT->next->next;

        }
        return slowT;
        
    }
};