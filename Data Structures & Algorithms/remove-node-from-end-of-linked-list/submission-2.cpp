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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr)
        return nullptr;
        if(head->next==nullptr)
        {
            if(n>=1)
            return nullptr;
            else
            return head;
        }
        int size=0;

        ListNode* temp=head;
        while(temp)
        {
            size++;
            temp=temp->next;
        }
        if(size==n)
        return head->next;
        cout<<size<<endl;
        int cnt=0;
        ListNode* curr=head;
        while(cnt<size-n)
        {
            cnt++;
            if(cnt==size-n)
            {
                ListNode* temp1=curr->next;
                ListNode* temp2=curr->next->next;
                curr->next=temp2;
                break;
            }
            curr=curr->next;
        }
        return head;
        
    }
};
