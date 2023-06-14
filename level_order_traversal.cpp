// level order traversal of tree
/*
   we use queue datastructure here to store  right and left values
   in the below sample code we store values level wise hence it is array of arrays
*/
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> a;
        queue<TreeNode*> q;
        if(!root)
          return a;
        q.push(root);
        while(!q.empty())
        {   
           int size = q.size();
           vector<int>level;
           for(int i=0;i<size;i++)
           {
            TreeNode * temp = q.front();
            q.pop();
            if(temp->left)
              q.push(temp->left);
            if(temp->right)
              q.push(temp->right);
             level.push_back(temp->val);
           }
          a.push_back(level);  
        }
        return a;
    }
};









