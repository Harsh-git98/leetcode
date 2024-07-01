void preorderRecur(TreeNode* root, vector<int> & ans)
{
  if(root==NULL)
{
return;
}
ans.push_back(root->val);
preorderRecur(root->left,ans);
preorderRecur(root->right,ans);
}
