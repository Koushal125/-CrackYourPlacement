#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int> hash;
        int l=nums.size(), res=0;
        for(int i=1; i<=l; i++)
        {
            hash[i]=0;
        }       
        for(int i=0; i<nums.size();i++)
        {
            if(hash[nums[i]]==1)
            {
                res=nums[i];
                break;
            }
            hash[nums[i]]++;
        }
        return res;
    }
};