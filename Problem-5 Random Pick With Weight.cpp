// Day 5 of june Leetcode Challenge

// Problem 5

// Random Pick with Weight

// Given an array w of positive integers, where w[i] describes the weight of index i, 
// write a function pickIndex which randomly picks an index in proportion to its weight.

// Note:
// 1 <= w.length <= 10000
// 1 <= w[i] <= 10^5
// pickIndex will be called at most 10000 times.


// Input: 
// ["Solution","pickIndex"]
// [[[1]],[]]

// Output: [null,0]


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    
    vector<int> s;
    Solution(vector<int>& w) 
    {
        for (int i=0; i<w.size(); i++)
        {
        	if(s.empty())
        	    s.push_back(i);
        	else
        	    s.push_back(i+s.back());
        }
        
    }
    
    int pickIndex() 
    {
        int m = s.back();
        int r = rand() % m;
        auto it = upper_bound(s.begin(), s.end(), r);
        return it - s.begin();
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
