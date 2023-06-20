class Solution {
  public:
    int count=0;
    int countNodes(Node* root) {
        // Write your code here
          if(root==NULL)
            return count;
        count++;
        countNodes(root->left);
        countNodes(root->right);
    }
};