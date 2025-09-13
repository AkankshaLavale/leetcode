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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> result;
        ListNode* temp = head;
        int count = 0;

        while (temp) {
            count++;
            temp = temp->next;
        }

        int baseSize = count / k;
        int extra = count % k;
        temp = head;
        for (int i = 0; i < k; i++) {
            ListNode* partHead = temp;
            ListNode* prev = nullptr;

            int partSize = baseSize + (extra > 0 ? 1 : 0);

            for (int j = 0; j < partSize && temp; j++) {
                prev = temp;
                temp = temp->next;
            }

            if (prev) prev->next = nullptr;

            result.push_back(partHead);
            if (extra > 0) extra--; 
        }

        return result;
    }
};
