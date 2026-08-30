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
      if(!head || !head->next)
      return nullptr;
       int len=0;
       ListNode* curr=head;
       while(curr)
       {
        len++;
        curr=curr->next;
       }
       if(len==n)
       {ListNode* ans=head->next;
        delete head;
        return ans;
       }
ListNode* curr1=head;
       for(int i=1;i<len-n;i++)
       {
        curr1=curr1->next;
       }
      // cout<<curr1->val;
       curr1->next=curr1->next->next;
       return head;
        
    }
};
