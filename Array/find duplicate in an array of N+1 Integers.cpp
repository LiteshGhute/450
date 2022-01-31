#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        set<int>dp;

        for(int el: nums){
            if(dp.find(el) == dp.end())
                dp.insert(el);
            else
                return el;
        }
        return -1;
    }
};