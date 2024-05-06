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
    ListNode* removeNodes(ListNode* head) {
    std::stack<ListNode*> stk;
    for (ListNode* it = head; it != nullptr; it = it->next) {
        while (!stk.empty() && stk.top()->val < it->val) {
            stk.pop();
        }
        stk.push(it);
    }

    ListNode dummy(0);
    ListNode* tail = &dummy;
    while (!stk.empty()) {
        tail->next = stk.top();
        stk.pop();
        tail = tail->next;
    }
    tail->next = nullptr;

    // Reverse the modified list
    ListNode* prev = nullptr;
    ListNode* curr = dummy.next;
    while (curr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}
};
