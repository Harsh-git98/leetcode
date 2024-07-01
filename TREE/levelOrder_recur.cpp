void levelOrder_recur(TreeNode* root, vector<vector<int>>& ans, int cnt) {
    if (root == NULL)
        return;
    if (ans.size() == cnt) {
        ans.push_back({});
    }
    ans[cnt].push_back(root->val);
    levelOrder_recur(root->left, ans, cnt + 1);
    levelOrder_recur(root->right, ans, cnt + 1);
}


int main()
{
  levelOrder_recur(root,ans,0);
  // return ans as vector
}
