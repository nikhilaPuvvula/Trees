class Solution
{
public:
    bool isPossible(int a,int b)
    {
        //code here
        if(a==2 && ((b==1) || (b==3)))
          return 1;
        else if((a==1 || a==3) && b==2)
          return 1;
        else 
          return 0;
    }
};
/* 1-preorder,2-in order,3-postorder
    tree cannot be found if only preorder and postorder traversal values are given
*/