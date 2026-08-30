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
    int gcd(int a,int b)
    {
        if(a==b)
        return a;
        if(b>a)
        {
            swap(a,b);
        }
        int te=b;
        while(b!=0)
        {
            cout<<a<<" "<<b;
            if(a%b==0 && te%b==0)
            return b;
            b--;
        }
        return -1;
        
        
        

    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
       if(!head || !head->next)
       return head;

       ListNode* curr=head;
       while(curr && curr->next)
       {
        int temp=gcd(curr->val,curr->next->val);
        ListNode* l1=new ListNode(temp);
        ListNode* l2=curr->next;
        curr->next=l1;
        l1->next=l2;
        curr=l2;
       }
       return head;
    }

};
