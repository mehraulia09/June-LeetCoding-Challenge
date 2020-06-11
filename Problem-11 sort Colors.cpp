// Day 11 June LeetCoding Challenge

// Problem 11

// SORT COLORS

// Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent, 
// with the colors in the order red, white and blue.
// Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

// Note: You are not suppose to use the library's sort function for this problem.


// Input: [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]


void sortColors(vector<int>& nums)
{
    int start = 0, end = nums.size()-1, i = 0;
    while(start<=end)
    {
        if(nums[start] == 2)
        {
            swap(nums[start], nums[end]);
            end--;
        }
            
        else if(nums[start] == 1)
            start++;
            
        else
        {
            swap(nums[start], nums[i]);
            start++;
            i++;
        }  
    }
}
