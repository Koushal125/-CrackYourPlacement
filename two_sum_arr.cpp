#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) 
    {
        int x=-1,y=-1;
        for(int i=0;i<n.size();i++)
        {
            for(int j=i+1;j<n.size();j++)
            {
                if(n[i]+n[j]==target)
                {
                    x=i;
                    y=j;
                    break;
                }
            }
        }
        vector<int> res;
        res.push_back(x); 
        res.push_back(y); 
        return res;
    }
};