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
        int flag = 0;
        ListNode* temp1;
        ListNode* temp2;
        ListNode* temp3;
        ListNode* ans = new ListNode();
        temp1 = l1;
        temp2 = l2;
        temp3 = ans;

        while(temp1 != nullptr && temp2 != nullptr){
            int num = temp1->val + temp2->val + flag;
            if(num>9){
                flag = 1;
                ListNode* nextNode = new ListNode(num%10);
                temp3->next = nextNode;
            }else{
                flag = 0;
                ListNode* nextNode = new ListNode(num);
                temp3->next = nextNode;
            }
            ListNode* newNode = new ListNode();
            if(temp1->next == nullptr && temp2->next != nullptr){
                temp1->next = newNode;
            }else if(temp1->next != nullptr && temp2->next == nullptr){
                temp2->next = newNode;
            }
    
            temp1 = temp1->next;
            temp2 = temp2->next;
            temp3 = temp3->next;
        }        
        if(flag == 1){
            ListNode* nextNode = new ListNode(1);
            temp3->next = nextNode;
            flag == 0;
        }

        return ans->next;
        
    }
};