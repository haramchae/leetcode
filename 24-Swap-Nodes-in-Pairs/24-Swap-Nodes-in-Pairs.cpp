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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* temp = head;
        ListNode* ans = head->next;
        ListNode* prev = NULL;
        while(temp && temp->next){
            ListNode* one = temp;
            ListNode* two = temp->next;
            one->next = two->next;
            two->next = one;
            if(prev){
                prev->next = two;
            }
            prev = one;
            temp = one->next;
           
        }
        return ans;
    }
};
