class Solution {
  public:
    //Function to return maximum path sum from any node in a tree.
    int max_value=INT_MIN;
    int maxPathSum(Node *root)
    {
        if(root==NULL)
          return 0;
        int left_path = maxPathSum(root->left);
        if(left_path<0)
          left_path=0;
        int right_path = maxPathSum(root->right);
        if(right_path<0)
           right_path=0;
         int value = left_path+right_path+root->data;
         if(value>max_value)
           max_value=value;
         return max(left_path,right_path)+root->data;
    }
    
    int findMaxSum(Node* root)
    {
        // Your code goes here
        int k = maxPathSum(root);
        // all cases are included except last returned values ....even it may be greater .....so last returned value is compared withe max_value upto now
        return max(k,max_value);
    }
};