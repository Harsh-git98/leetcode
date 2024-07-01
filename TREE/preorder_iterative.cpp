vector<int> preorder_iterative(TreeNode* root) {
    vector<int> ans;
    if (root == NULL) return ans; 
    stack<TreeNode*> st;
    st.push(root);
    while (!st.empty()) {
        TreeNode* curr = st.top();
        st.pop();
        ans.push_back(curr->val);
        
        if (curr->right) st.push(curr->right);
        if (curr->left) st.push(curr->left);
    }
    return ans;
}
