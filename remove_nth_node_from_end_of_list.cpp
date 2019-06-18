class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        int x{1};
        ListNode *temp = dummy;
        ListNode *prev = dummy; 
        ListNode *pNode = dummy;
        for(int i{1};i<n;++i){
            temp = temp->next;
        }
        while(temp->next != NULL){
            temp = temp->next;
            pNode = pNode->next;
            if(x!=1){
                prev = prev->next;
            }
            x++;
        }
        prev->next = pNode->next;
        delete(pNode);
        return dummy->next;
    }
};