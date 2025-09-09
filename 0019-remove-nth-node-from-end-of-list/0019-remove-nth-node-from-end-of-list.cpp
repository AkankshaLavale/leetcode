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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        
        ListNode*dummy= new ListNode(-1);
        dummy->next=head;
        ListNode*temp=head;
        ListNode*prev=dummy;
        while(temp){
            count++;
            temp=temp->next;
        }
        count-=n;
        // if(count==0){
        //     temp=head;
        //     head=head->next;
        //     delete temp;
        //     return head;
        // }
        ListNode*curr=dummy->next;
     while(count--){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;

    return dummy->next;

    }
    

};