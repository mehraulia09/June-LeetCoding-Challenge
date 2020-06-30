/* Day 26 June LeetCode Challenge

   Problem-26
   
   Sum Root to Leaf Numbers

   Given a binary tree containing digits from 0-9 only, each root-to-leaf path could represent a number.
   An example is the root-to-leaf path 1->2->3 which represents the number 123.
   Find the total sum of all root-to-leaf numbers.
   
   Example:

   Input: [1,2,3]
       1
      / \
     2   3
   Output: 25

   Explanation:
   The root-to-leaf path 1->2 represents the number 12.
   The root-to-leaf path 1->3 represents the number 13.
   Therefore, sum = 12 + 13 = 25.

*/

void dfs(TreeNode* root, string str, vector<int>&vec)
{
    if(root == nullptr)
        return;
        
    if(root->left == nullptr && root->right == nullptr)
    {
        str += to_string(root->val);
        vec.push_back(stoi(str));
        return;
    }
        
    str+= to_string(root->val);
    dfs(root->left, str, vec);
    dfs(root->right, str, vec);
    str.pop_back();
}

int sumNumbers(TreeNode* root) 
{
    if(root == nullptr)
        return 0;
    string str = "";
    vector<int> vec;
    dfs(root, str, vec);
    int sum = 0;
    for(int i=0; i<vec.size(); i++)
        sum+=vec[i];
    return sum;
}
