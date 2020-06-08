// Day 8 of June LeetCode Challenge

// Problem 8

// Power of Two

// Given an integer, write a function to determine if it is a power of two.

// Input: 64
// Output: true 



bool isPowerOfTwo(int n) 
{   
    if(n == 0 || n == INT_MIN || n == INT_MAX)
        return false;
        
    if((n&(n-1)) == 0)
        return true;
    else
        return false;
}
