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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(0);
        ListNode* temp = ans;
        int flag = 0;
        
        while(l1!=nullptr || l2!=nullptr || flag==1){
            int sum = 0;
            if(l1!=nullptr){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2!=nullptr){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += flag;
            flag = sum/10;
            ListNode* newNode = new ListNode(sum%10);
            temp->next = newNode;
            temp = temp->next;
        }
        
        return ans->next;
    }
};