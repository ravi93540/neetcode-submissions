class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;

        // 1. Find the middle of the list
        // After this, 'slow' will be the start of the second half
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Reverse the second half
        // Example: 1->2->3->4->5 becomes two lists: 1->2->3 and 5->4
        ListNode* secondHalf = reverse(slow->next);
        slow->next = nullptr; // Cut the list in two

        // 3. Merge the two halves
        ListNode* firstHalf = head;
        while (secondHalf) {
            ListNode* tmp1 = firstHalf->next;
            ListNode* tmp2 = secondHalf->next;

            firstHalf->next = secondHalf;
            secondHalf->next = tmp1;

            firstHalf = tmp1;
            secondHalf = tmp2;
        }
    }

private:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
};