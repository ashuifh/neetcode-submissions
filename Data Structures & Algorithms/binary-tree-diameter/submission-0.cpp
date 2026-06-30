class Solution {
public:
  int maxi(TreeNode* root)
  {
    if(!root)
    {
        return 0;
    }
    return 1+ max(maxi(root->left),maxi(root->right));
  }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        int left=maxi(root->left);
        int right=maxi(root->right);
        int dia=left+right;
        int sub=max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right));
        return max(dia,sub);
    }
};
