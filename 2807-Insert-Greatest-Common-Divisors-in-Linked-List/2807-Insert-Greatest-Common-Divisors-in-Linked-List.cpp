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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* ans = head;
        while(ans->next){
            int first = ans->val;
            int second = ans->next->val;
            int minNum = min(first, second);
            while(first%minNum!=0 || second%minNum!=0){
                minNum--;
            }
            ListNode* temp = new ListNode(minNum);
            ListNode* nextNode = ans->next;
            ans->next = temp;
            temp->next = nextNode;
            ans = nextNode;
        }
        return head;
    }
};
