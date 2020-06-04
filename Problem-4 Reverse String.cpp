// Day 4 of june Leetcode Challenge

// Problem 4

// Reverse String

// Write a function that reverses a string. The input string is given as an array of characters char[].
// Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

// Input: ["j", "a", "t", "i", "n"]
// Output: ["n", "i", "t", "a", "j"]


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    
    void reverseString(vector<char>& s) 
    {
        int n = s.size();
        int i=0, j=n-1;
        
        while(i<j)
        {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
};
