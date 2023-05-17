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
    int pairSum(ListNode* head) {
        stack<int> st;
        int maxSum = INT_MIN;
        ListNode* fast = head;
        ListNode* slow = head;
        while(slow){
            if(fast){
                st.push(slow->val);
                fast = fast->next->next;
            }else{
                int temp = st.top() + slow->val;
                st.pop();
                maxSum = max(maxSum, temp);
            }
            slow = slow->next;
        }
        return maxSum;
    }
};
