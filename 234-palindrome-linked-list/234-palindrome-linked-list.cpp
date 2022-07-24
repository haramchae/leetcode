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
    bool isPalindrome(ListNode* head) {
        vector <int> v;
        while(head != nullptr){
            v.push_back(head->val);
            head = head->next;
        }
        
        int first = 0, last = v.size() - 1;
        bool ans = true;
        
        for(int i = 0; i<v.size()/2; i++){
            if(v[first] != v[last]){
                ans = false;
            }
            first++;
            last--;
        }
        return ans;
    }
};