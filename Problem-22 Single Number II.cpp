/* Day 22 June LeetCode Challenge

   Problem 22

   Single Number II

   Given a non-empty array of integers, every element appears three times except for one, which appears exactly once. Find that single one.

   Note:
   Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

   Example 1:

   Input: [2,2,3,2]
   Output: 3 
*/

int singleNumber(vector<int>& nums)
{
    int ones = 0, twos = 0;
    for(int i=0; i<nums.size(); i++)
    {
        ones = (ones^nums[i])& ~ twos;
        twos = (twos^nums[i])& ~ ones;
    }
    return ones;
}


   

