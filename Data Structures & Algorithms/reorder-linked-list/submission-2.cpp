class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;

        
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

         
        ListNode* secondHalf = reverse(slow->next);
        slow->next = nullptr; 
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