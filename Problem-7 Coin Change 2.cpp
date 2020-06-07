// Day 7 of June LeetCode Challenge

// Problem 7

// Coin Change 2

// You are given coins of different denominations and a total amount of money.
// Write a function to compute the number of combinations that make up that amount.
// You may assume that you have infinite number of each kind of coin.

// Input: amount = 5, coins = [1, 2, 5]
// Output: 4

// Explanation: there are four ways to make up the amount:
// 5=5
// 5=2+2+1
// 5=2+1+1+1
// 5=1+1+1+1+1


int change(int amount, vector<int>& coins) 
{
    vector<int> dp(amount+1, 0);
    dp[0] = 1;
        
    for(int i=0; i<coins.size(); i++)
    {
        for(int j=0; j<=amount; j++)
        {
            if(j >= coins[i])
                dp[j] += dp[j - coins[i]];
        }
    }
        
    return dp[amount];
}
