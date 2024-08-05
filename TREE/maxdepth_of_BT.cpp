int maxdepth(TreeNode* root)
{
    if(root==NULL)
    {
        return 0;
    }

    int lh=maxdepth(root->left);
    int rh=maxdepth(root->right);

    return 1+max(lh,rh);
    
}