class Solution {
public:
    ListNode*  swapPairs(ListNode* head){
    ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* prev = dummy;
    ListNode* curr = head,*temp;
    while (curr != nullptr && curr-> next != nullptr){
        temp = curr->next;
        curr->next = temp-> next;
        temp-> next = curr;
        curr = temp;
        prev -> next = curr;
        prev = prev->next->next;
        curr = curr->next->next;
    }
    return dummy->next;
    
    
}
};