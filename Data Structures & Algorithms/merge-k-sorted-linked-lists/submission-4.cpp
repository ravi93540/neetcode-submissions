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
   struct comapreNode
   {
    bool operator()( ListNode* a,ListNode* b)
    {
       return a->val>b->val;
    }
   };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         priority_queue<ListNode*,vector<ListNode*>,comapreNode> pq;

         for(int i=0;i<lists.size();i++)
         {
            pq.push(lists[i]);
         }

         ListNode* dummy=new ListNode(0);
         ListNode* ans=dummy;
         while(!pq.empty())
         {
            if(!pq.empty()){
            ListNode* temp=pq.top();
            pq.pop();
            dummy->next=temp;
            dummy=dummy->next;
            if(temp->next)
            pq.push(temp->next);
            }
         }
         return ans->next;
    }
};
