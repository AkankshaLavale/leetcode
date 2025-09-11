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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     
        unordered_map<ListNode*, bool> visited;
        ListNode* curr = headA;
        while (curr) {
        visited[curr] = 1;
        curr = curr->next;
        }
        curr = headB;
    while (curr) {
        if (visited[curr]) {
            return curr; 
        }
        curr = curr->next;
    }

    return NULL;

    }
};
