//two stack method
 //    1
//   2   3
       // 1 stack me fir 2 and fir 3
       //ans me 1 fir 3 fir 2
       //to 3 wale idhar push honge uske baad 2 push honge




vector<int> postOrder_iterative(TreeNode* root) {
    vector<int> res;
    if (root == NULL) return res; // Handle case when root is NULL

    stack<TreeNode*> st;
    stack<int> ans;
    st.push(root);
    while (!st.empty()) {
        TreeNode* node = st.top();
        st.pop();
        ans.push(node->val);
        if (node->left) st.push(node->left);
        if (node->right) st.push(node->right);
    }
    while (!ans.empty()) {
        res.push_back(ans.top());
        ans.pop();
    }
    return res;
}
