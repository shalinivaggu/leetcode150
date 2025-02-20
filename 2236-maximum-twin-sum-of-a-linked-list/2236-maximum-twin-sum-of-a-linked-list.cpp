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
        stack<int> st;
        ListNode* slow = head;
        ListNode* fast = head;
        int ans = INT_MIN , sum = 0 ; 
        
        while(fast && fast->next) {
            st.push(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }

        while(slow != nullptr) {
           
            sum = st.top() + slow->val;
            st.pop();
            ans = max(ans , sum);
            slow = slow->next;
        }

        return ans;
    }
};