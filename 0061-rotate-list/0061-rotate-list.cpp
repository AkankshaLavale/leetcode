class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        
        int count = 1;
        ListNode* tail = head;
        while (tail->next) {
            tail = tail->next;
            count++;
        }

        tail->next = head;

        
        k = k % count;
        int stepsToNewTail = count  - k;
        ListNode* newTail = head;
        for (int i = 1; i < stepsToNewTail; i++) {
            newTail = newTail->next;
        }

        
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};
