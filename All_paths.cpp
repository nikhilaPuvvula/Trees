/* Structure of Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};*/

/* The function should print all the paths from root
 to leaf nodes of the binary tree */
bool isLeaf(Node *root)
{
    return !root->left&&!root->right;
}
void findPaths(Node * root,vector<vector<int>> &a,vector<int> &b)
{
    if(root==NULL)
      return;
    b.push_back(root->data);
    if(isLeaf(root))
    {
        a.push_back(b);
        
    }
    findPaths(root->left,a,b);
    findPaths(root->right,a,b);
    b.pop_back();
}
vector<vector<int>> Paths(Node* root)
{
    // Code here
    vector<vector<int>> a;
    vector<int> b;
    findPaths(root,a,b);
    return a;
}