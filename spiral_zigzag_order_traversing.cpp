//zig zag order or spiral order level order traversing


//storing level wise
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> a;
        queue<TreeNode*>q;
        if(!root)
          return a;
        q.push(root);
        int level = 1;
        while(!q.empty())
        {  
           int size = q.size();
           vector<int> b;
           for(int i=0;i<size;i++)
           { 
               TreeNode * temp = q.front();
                q.pop();
                if(temp->left)
                  q.push(temp->left);
                if(temp->right)
                  q.push(temp->right); 
                b.push_back(temp->val);
           }
          level++;
          if(level%2 != 0)
            reverse(b.begin(),b.end());
          a.push_back(b);
        }
        return a;
    }
};



//storing directly without sub levels
vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int>a;
    queue<Node *>q;
    int level=0;
    if(!root)
      return a;
    q.push(root);
    while(!q.empty())
    {
        int size=q.size();
        vector<int> b;
        for(int i=0;i<size;i++)
        {
            Node * temp = q.front();
            q.pop();
            if(temp->left)
              q.push(temp->left);
            if(temp->right)
               q.push(temp->right);
             b.push_back(temp->data);
        }
         level++;
        if(level%2 != 0)
           reverse(b.begin(),b.end());
        
        int j=0;
        while(j<b.size())
        {
          a.push_back(b[j]);
          j++;
        }
        
    }
    return a;
}