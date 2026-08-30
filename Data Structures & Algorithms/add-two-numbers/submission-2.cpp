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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     if(!l1)
     return l2;
     if(!l2)
     return l1;
     if(!l1 && !l2)
     return nullptr;
     
    
     ListNode* head=new ListNode(0,nullptr);
      ListNode* dummy=new ListNode(0,head);
      int carry=0;
      while(l1 || l2||carry!=0)
      {
        int sum=0;
        if(l1)
        {
        sum+=l1->val;
        l1=l1->next;
        }
        if(l2)
        {
        sum+=l2->val;
        l2=l2->next;
        }
        sum=sum+carry;
      if(sum>=10)
      {
       ListNode* temp=new ListNode(sum%10);
        carry=sum/10;
        head->next=temp;
        head=head->next;
      }
      else
      {
         ListNode* temp=new ListNode(sum);
        carry=0;
        head->next=temp;
        head=head->next;
      }

      }
      
      
        return dummy->next->next;
    }
};
