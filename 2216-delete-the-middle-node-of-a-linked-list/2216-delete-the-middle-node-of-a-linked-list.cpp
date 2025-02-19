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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return nullptr;
        ListNode* temp = head;
        int n = 0 ;
        while(temp != nullptr) {
            n++;
            temp = temp->next;
        }

        n = n / 2;

        temp = head; 
        ListNode* prev = nullptr;
        int i = 0 ; 
        while(temp != nullptr && i < n) {
            prev = temp;
            temp = temp->next;
            i++;
        }

        prev->next = temp->next;
        delete temp;
        return head;
        
    }
};