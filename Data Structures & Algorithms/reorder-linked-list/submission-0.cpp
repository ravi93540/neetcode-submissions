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
    void reorderList(ListNode* head) {
        
        vector<ListNode*> temp;
        vector<ListNode*> temp1;
        ListNode* curr1=head;
    while(curr1!=nullptr)
    {
        temp.push_back(curr1);
        curr1=curr1->next;
    }
    int i=0,j=temp.size()-1;
    while(i<j)
    {
        temp1.push_back(temp[i]);
        temp1.push_back(temp[j]);
        i++;
        j--;
    }
    if (i == j) {
    temp1.push_back(temp[i]);
}
   
    ListNode* curr3=head;
    
    
    for(int k=1;k<temp1.size();k++)
    {
        
        head->next=temp1[k];
       // cout<<head->next->val;
        head=head->next;
        cout<<head->val;

    }
    head->next=nullptr;
    head=curr3;
    


    }
};
