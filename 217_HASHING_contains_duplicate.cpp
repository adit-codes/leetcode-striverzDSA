#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    	map<int,int>hash[];
    	int n=nums.size();
    	for(int i=0;i<n;i++)
    	{
    		mpp[hash[i]]++;
    	}
    	for(auto it:hash)
    	{
    		if(it.second>1) return true;
    	}
    	return false;
        
    }
};