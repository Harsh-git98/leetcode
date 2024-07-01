vector<int> inorder_iterative(TreeNode* root) {
    vector<int> ans;
    stack<TreeNode*> st;

    while (true) {
        if (root != NULL) {
            st.push(root);
            root = root->left;
        } else {
            if (st.empty()) {
                break;
            } else {
                root = st.top();
                st.pop();
                ans.push_back(root->val);
                root = root->right;
            }
        }
    }

    return ans;
}


// what we are doing here, first we are goingf to left left left and soon and store all in stack;
// at last we got left == null;
/*  so we enter in else condition now the entity that is on top we have got it (ROOT ) and now we push right
    if right is also null then again pop the but here we got above root , so we print then move to right and move to right if right exist then goto right again traveerse left left
    
*/
