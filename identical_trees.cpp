/* A binary tree node


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/


   
class Solution
{
    public:
    //Function to check if two trees are identical.
    int check_equal(Node *r1,Node *r2)
    {
        if(r1==NULL && r2==NULL)
        {
            return 1;
        }
        if(r1==NULL || r2==NULL)
        {
            return 0;
        }
     return ((r1->data==r2->data)&&check_equal(r1->left,r2->left)&&check_equal(r1->right,r2->right));  
    }
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        int k = check_equal(r1,r2);
        return k;
        
    }
};