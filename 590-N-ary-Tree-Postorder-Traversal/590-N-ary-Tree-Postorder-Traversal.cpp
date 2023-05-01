/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        stack<Node*> st;
        vector<int> v;
        if(!root) return v;
        st.push(root);
        while(!st.empty()){
            Node* temp = st.top();
            v.insert(v.begin(), temp->val);
            st.pop();
            for(auto it: temp->children){
                st.push(it);
            }
        }
        return v;
    }
};
