class Solution {
    private:
    ListNode* reverse(ListNode* head)
    {
        if(!head)
        return nullptr;
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr)
        {
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
public:

    void reorderList(ListNode* head) {
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
};