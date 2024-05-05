/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr){
            return false;
        }
        ListNode* fast = head->next;
        ListNode* slow = head;
        bool isCycle = false;
        while(!isCycle){
            if(fast->next == nullptr || fast->next->next == nullptr){
                return false;
            }
            if(fast == slow){
                isCycle = true;
            }
            fast= fast->next->next;
            slow = slow->next;
        }
        return isCycle;

    }
};
