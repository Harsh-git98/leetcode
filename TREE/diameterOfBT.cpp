int maxDepthAndDiameter(TreeNode* root, int &diameter)
{
    if (root == NULL)
    {
        return 0;
    }

    int lh = maxDepthAndDiameter(root->left, diameter);
    int rh = maxDepthAndDiameter(root->right, diameter);

    // Update the diameter with the sum of left and right heights
    diameter = max(diameter, lh + rh);

    // Return the height of the current node
    return 1 + max(lh, rh);
}
