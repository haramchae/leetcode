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
    void reorderList(ListNode* head) {
        ListNode* cur = head;
        ListNode* last = head;
        while(cur->next && cur->next->next){
            while(last->next && last->next->next){
                last=last->next;
            }
            ListNode* check = last->next;
            last->next = nullptr;
            ListNode* temp = cur->next;
            cur->next = check;
            check->next = temp;
            cur = temp;
            last = temp;
        }
    }
};
