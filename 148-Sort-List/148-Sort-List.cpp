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
    ListNode* merge(ListNode* first, ListNode* second){
        if(!first) return second;
        if(!second) return first;
        ListNode* merged;
        if(first->val>second->val){
            merged = second;
            merged->next = merge(first, second->next);
        }else{
            merged = first;
            merged->next = merge(first->next, second);
        }
        return merged;
    }

    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *slow = head, *fast = head, *cut = head;
        while(fast && fast->next){
            fast = fast->next->next;
            cut = slow;
            slow = slow->next;
        }
        cut->next = NULL;
        head = sortList(head);
        slow = sortList(slow);
        return merge(head, slow);
    }
};
