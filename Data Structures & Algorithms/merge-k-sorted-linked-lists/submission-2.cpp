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
   struct CompareNodes {
        bool operator()(ListNode* a, ListNode* b) {
            // We want a min-heap, so return true if a's value is greater than b's
            return a->val > b->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         priority_queue<ListNode*,vector<ListNode*>,CompareNodes> pq;

         for(int i=0;i<lists.size();i++)
         {
            pq.push(lists[i]);
         }
         ListNode* dummy=new ListNode(0);
         ListNode* ans=dummy;
         while(!pq.empty())
         {
            if(!pq.empty())
            {
                ListNode* te=pq.top();
                pq.pop();
                dummy->next=te;
                dummy=dummy->next;
                if(te->next)
                pq.push(te->next);
            }
         }
         return ans->next;
    }
};
