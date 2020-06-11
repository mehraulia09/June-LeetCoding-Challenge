// Day 10 June LeetCoding Challenge

// Problem 10

// SEARCH INSERT POSITION

// Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
// You may assume no duplicates in the array.

// Input: [1,3,5,6], 5
// Output: 2



int searchInsert(vector<int>& arr, int target)
{
    int low = 0, high = arr.size()-1;
        
    while(low<=high)
    {
        int mid = (low + high)/2;
            
        if(arr[mid] == target)
            return mid;
            
        else if(mid > 0 && arr[mid] > target && target > arr[mid-1])
            return mid;
            
        else if(mid < high -1 && arr[mid] < target && target < arr[mid+1])
            return mid+1;
            
        else if(arr[mid] > target)
            high = mid-1;
            
        else
            low = mid + 1;
            
    }
        
    if(low != 0)
        return arr.size();
    else
        return 0;
     
}
