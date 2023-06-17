class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int checkBalanced(Node * root)
    {
        if(root==NULL)
          return 0;
        int leftChild = checkBalanced(root->left);
          if(leftChild==-1)
            return -1;
        int rightChild = checkBalanced(root->right);
           if(rightChild==-1)
             return -1;
        int k = abs(leftChild-rightChild);
        if(k>1)
          return -1;
        return max(leftChild,rightChild)+1;
    }
    
    bool isBalanced(Node *root)
    {
        //  Your Code here
        int k = checkBalanced(root);
        if(k!=-1)
          return 1;
        else
          return 0;
    
    }
};