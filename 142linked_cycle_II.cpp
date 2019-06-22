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
    ListNode *detectCycle(ListNode *head) {
        ListNode* dummy = new ListNode(0);      
    dummy->next = head;
    ListNode* slow = dummy;
    ListNode *fast = dummy;

   
    bool isLoop{false};
    while(fast && slow && fast->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            isLoop = true;
            break;
        }
    }
    if(isLoop){
        slow = dummy;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
            
            
        }
        return slow;
    }
    return nullptr;
    }
};