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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return head;
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* fowd;
        while(curr->next != nullptr){
            fowd = curr-> next;
            ListNode* temp = prev;
            prev = curr;
            curr->next = temp;
            curr = fowd;
        }
        curr->next = prev;
        return curr;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head  == nullptr || head->next == nullptr) return true;
        ListNode *fast = head;
        ListNode* start;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy,*slow = dummy;
        while(fast != nullptr &&  fast-> next != nullptr ){
            slow = slow->next;
            fast = fast->next->next;
            dummy = dummy-> next;
            
            
        }
        if(fast == nullptr){
            start = slow->next;
            slow->next=nullptr;
        }else if(fast->next == nullptr){
            start=slow;
            prev->next = nullptr;
        }
        fast = head;
        
        ListNode* reversed = reverseList(start);
        while(fast != nullptr){
            if(fast->val != reversed->val){
                return false;
            }
            fast= fast->next;
            reversed = reversed->next;
        }
        return true;
        

    }
};