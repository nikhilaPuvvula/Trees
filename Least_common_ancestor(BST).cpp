class Solution{
    public:
        Node* LCA(Node *root, int n1, int n2)
        {
            // code here
            /*if(root==NULL|| root->data==n1||root->data==n2)
              return root;
            Node *left = LCA(root->left,n1,n2);
            Node * right = LCA(root->right,n1,n2);
            if(left==NULL)
              return right;
            else if(right==NULL)
              return left;
            else
              return root;*/
            if(root==NULL)
              return root;
            //if((n1<=root->data && root->data<=n2) || (n1>=root->data && root->data>=n2) )
            //return root;
            if(n1>root->data && n2>root->data)
               LCA(root->right,n1,n2);
            else if(n1<root->data && n2<root->data)
               LCA(root->left,n1,n2);
            else
              return root;
            
        }

};