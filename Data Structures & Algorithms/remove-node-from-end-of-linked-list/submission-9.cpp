class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
   int len=0;
   ListNode* curr=head;
   while(curr)
   {
    len++;
    curr=curr->next;
   }
   int cnt=0;
   ListNode* dummy=new ListNode();
   dummy->next=head;
   ListNode* ans=dummy;
   for(int i=1;i<=len-n;i++)
   {
    dummy=dummy->next;
   }
   ListNode* temp=dummy->next->next;
   dummy->next=temp;
   return ans->next;
   
   
    }
};