#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& p) 
    {
        int res=0, mini=p[0];
        for(int i=1;i<p.size();i++)
        {
            int cost = p[i] - mini;
            res = max(res, cost);
            mini = min(mini, p[i]);
        }    
        return res;
    }
};