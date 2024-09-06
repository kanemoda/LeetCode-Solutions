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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        // Create a set for fast lookup
        unordered_set<int> valuesToRemove(nums.begin(), nums.end());
        
        // Remove nodes from the head
        while (head != nullptr && valuesToRemove.count(head->val)) {
            ListNode* temp = head;
            head = head->next;
            delete temp;  // Free memory if needed
        }

        // Remove nodes from the middle
        ListNode* current = head;
        while (current != nullptr && current->next != nullptr) {
            if (valuesToRemove.count(current->next->val)) {
                // Node to be removed
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;  // Free memory if needed
            } else {
                // Move to next node
                current = current->next;
            }
        }

        return head;
    }
};
