class Solution {
public:
    int checkBalanced(TreeNode * root)
    {
        if(root==NULL)
          return 0;
        int left_height = checkBalanced(root->left);
          if(left_height==-1)
            return -1;
        int right_height = checkBalanced(root->right);
          if(right_height==-1)
            return -1;
        if(abs(left_height-right_height)>1)
          return -1;
        else
          return max(left_height,right_height)+1;
            
    }
    bool isBalanced(TreeNode* root) {
        int k = checkBalanced(root);
        if(k==-1)
          return 0;
        else
          return 1;

    }
};