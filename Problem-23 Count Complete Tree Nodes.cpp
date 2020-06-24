/* Day 23 June LeetCode Challenge

   Problem 23
   
   Count Complete Tree Nodes

   Given a complete binary tree, count the number of nodes.
   
   Example:

   Input: 
       1
      / \
     2   3
    / \  /
   4  5 6

   Output: 6
   
*/

int countNodes(TreeNode* root) 
{
    if(root == nullptr)
        return 0;
        
    int lh = 0, rh = 0;
    TreeNode* l = root, *h = root;
        
    while(l!=nullptr)
    {
        l = l->left;
        lh++;
    }
        
    while(h!=nullptr)
    {
        h = h->right;
        rh++;
    }
        
    if(lh == rh)
        return pow(2,lh)-1;
    else
        return 1 + countNodes(root->left) + countNodes(root->right);
}
