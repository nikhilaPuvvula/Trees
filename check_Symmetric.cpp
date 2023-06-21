/*
Structure of the node of the tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool findTree(struct Node * root1 , struct Node *root2)
    {
       if(root1==NULL || root2==NULL)
         return root1==root2;
       return (root1->data==root2->data) && findTree(root1->left,root2->right) && findTree(root1->right,root2->left);
    }
    bool isSymmetric(struct Node* root)
    {
	    // Code here
	    if(root==NULL)
	      return 1;
	    bool k =findTree(root->right,root->left);
	    return k;
	 }
};