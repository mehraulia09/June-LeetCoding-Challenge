/* Day 25 June LeetCode Challenge

   Problem 25
  
   Find the Duplicate Number

   Given an array nums containing n + 1 integers where each integer is between 1 and n (inclusive), 
   prove that at least one duplicate number must exist. Assume that there is only one duplicate number, find the duplicate one.

   Example 1:

   Input: [1,3,4,2,2]
   Output: 2
   
*/

int findDuplicate(vector<int>& nums) 
{
    int slow = nums[0];
    int fast = nums[nums[0]];
        
    if(nums.size()>1)
    {
        while(slow!=fast)
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        
        fast = 0;
        while(slow!=fast)
        {
            fast = nums[fast];
            slow = nums[slow];
        }
        return slow;
    }
    else
        return -1;
        
}
