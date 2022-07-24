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
    ListNode* middleNode(ListNode* head) {
        int size = 0;
        ListNode* temp = head;
        while(temp != nullptr){
            size++;
            temp = temp->next;
        }
        
        size = size/2 +1;
        
        for(int i = 1; i<size; i++){
            head = head->next;
        }
        return head;
    }
};