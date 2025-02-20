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
    int pairSum(ListNode* head) {

        ListNode* cur = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        ListNode* temp;
        int ans = INT_MIN , sum = 0 ; 
        
        while(fast) { 
           fast = fast->next->next;
           temp = cur->next;
           cur->next = prev;
           prev = cur;
           cur = temp;
           
        }
        ListNode* slow = prev;
        while(cur != nullptr) {
            ans = max(ans , cur->val + slow->val);
            cur = cur->next;
            slow = slow->next;
        }

        return ans;
    }
};