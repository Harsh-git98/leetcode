void inorderRecur(Treeznode* root, vector<int> &ans){
  if(root==NULL){
      return ;
  }
  inorderRecur(root->left,ans)
    ans.push_back(root-val);
   inorderRecur(root->right,ans);
}
