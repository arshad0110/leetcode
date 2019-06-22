/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return head;
        ListNode* dummy = new ListNode(0);
        ListNode* prev = new ListNode(INT_MAX);
        prev->next = head;
        ListNode* temp = dummy;
        ListNode *curr = head,*forw = nullptr;
        while(curr->next != nullptr){
            forw = curr->next;
            
            if(curr->val != prev->val && curr->val != forw->val){
                temp->next = curr;
                temp = temp->next;
            }
            prev = prev->next;
            curr = curr->next;
            forw = forw->next;
        }
        if(curr->val != prev->val){
            temp->next = curr;
        }else{temp->next = nullptr;}
        return dummy->next;
        
    }
};