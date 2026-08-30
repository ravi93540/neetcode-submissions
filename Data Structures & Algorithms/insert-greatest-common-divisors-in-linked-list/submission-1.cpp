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
    // Function to compute GCD of two numbers (Euclidean algorithm)
    int gcd(int a, int b) {
        while(b!=0)
        {
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (!head || !head->next) return head; // If list has 0 or 1 node

        ListNode* curr = head;
        while (curr && curr->next) {
            int g = gcd(curr->val, curr->next->val);

            // Create a new node with gcd value
            ListNode* newNode = new ListNode(g);

            // Insert between curr and curr->next
            newNode->next = curr->next;
            curr->next = newNode;

            // Move curr two steps forward (skip newly added node)
            curr = newNode->next;
        }

        return head;
    }
};
