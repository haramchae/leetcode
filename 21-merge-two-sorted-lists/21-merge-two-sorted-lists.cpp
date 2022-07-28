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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v;
        ListNode* ans = new ListNode();
        ListNode* temp = ans;
        while(list1){
            v.push_back(list1->val);
            list1 =list1->next;
        }
        while(list2){
            v.push_back(list2->val);
            list2 =list2->next;
        }
        
        sort(v.begin(), v.end());

        for(int i = 0; i < v.size(); i++){
            ListNode* newNode = new ListNode(v[i]);
            temp->next = newNode;
            temp = temp->next;
        }
        
        return ans->next;
        
    }
};