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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;
        for(int i=0;i<lists.size();i++)
        {
            ListNode* temp=lists[i];
            while(temp)
            {
                v.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(v.begin(),v.end());
        ListNode* dummy=new ListNode(0);
        ListNode* ans=dummy;
        for(int i=0;i<v.size();i++)
        {
           
            ListNode* te=new ListNode(v[i]);
            dummy->next=te;
            dummy=dummy->next;
        }
        return ans->next;
    }
};
