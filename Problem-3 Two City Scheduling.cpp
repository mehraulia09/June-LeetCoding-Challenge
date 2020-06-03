// Day 3 of june Leetcode Challenge

// Problem 3

// TWO CITY SCHEDULING

// There are 2N people a company is planning to interview. The cost of flying the i-th person to city A is costs[i][0], 
// and the cost of flying the i-th person to city B is costs[i][1].

// Return the minimum cost to fly every person to a city such that exactly N people arrive in each city.

// Input: [[30,20],[30,200],[40,50],[30,20]]

// Output: 110

// Explanation: 
// The first person goes to city B for a cost of 20.
// The second person goes to city A for a cost of 30.
// The third person goes to city A for a cost of 40.
// The fourth person goes to city B for a cost of 20.

// The total minimum cost is 20 + 30 + 40 + 20 = 110 to have half the people interviewing in each city.



static bool cmp(vector<int>a, vector<int> b)
{
    return a[1]-a[0]>b[1]-b[0];
}
    
int twoCitySchedCost(vector<vector<int>>& costs) 
{
        
    sort(costs.begin(),costs.end(),cmp);
    int ans=0;
        
    for(int i=0 ; i<costs.size() ; i++)
    {
        if(i<costs.size()/2) 
            ans+=costs[i][0];
        else 
            ans+=costs[i][1];
    }
    return ans;
        
}
