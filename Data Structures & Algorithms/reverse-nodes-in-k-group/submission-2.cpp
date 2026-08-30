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
    ListNode* reverseKGroup(ListNode* head, int k) {
      int len=0;
      ListNode* curr=head;
      while(curr)
      {
        len++;
        curr=curr->next;
      }
      if(len<k)
      return head;
        curr=head;
      ListNode* prev=nullptr;
      ListNode* temp=nullptr;
      for(int i=1;i<=k;i++)
      {
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
      }
      if(temp)
      {
        head->next=reverseKGroup(temp,k);
      }
      return prev;

    }
};
