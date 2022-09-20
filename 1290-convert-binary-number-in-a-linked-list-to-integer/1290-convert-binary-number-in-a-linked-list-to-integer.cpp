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
    int getDecimalValue(ListNode* head) {
        vector<int> temp;
        while(head){
            temp.push_back(head->val);
            head = head->next;
        }
        int base = 1, sum = 0;
        for(int i = temp.size()-1; i>=0; i--){
            sum += temp[i]*base;
            base *=2;
        }
        return sum;
    }
};