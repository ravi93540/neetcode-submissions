class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // 1. Move fast so there is a gap of n nodes between slow and fast
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // 2. Move both until fast reaches the last node
        while (fast->next != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // 3. slow->next is the node to delete
        ListNode* nodeToDelete = slow->next;
        slow->next = slow->next->next;
        
        delete nodeToDelete; // Clean up memory

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};