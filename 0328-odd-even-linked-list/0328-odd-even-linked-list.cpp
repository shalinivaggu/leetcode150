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
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode* oddhead = new ListNode(-1);
        ListNode* evenhead = new ListNode(-1);

        ListNode* odd = oddhead;
        ListNode* even = evenhead;
        ListNode* temp = head;
        int n = 1 ; 

        while(temp != nullptr) {
            if(n % 2 == 1) {
                odd->next = temp;
                odd = odd->next;
            } else {
                even->next = temp;
                even = even->next;
            }
            n++;
            temp = temp->next;
        }

        odd->next = evenhead->next;
        even->next = nullptr;

        return oddhead->next;
    }
};