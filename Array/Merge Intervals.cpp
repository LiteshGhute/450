#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>res;
        
        if(intervals.size()==1 || intervals.size()==0)
            return intervals;
        
        auto curr_interval = intervals[0];
        
        for(int i=1; i<intervals.size(); i++){
            //check if merges or not
            if(intervals[i][0] <= curr_interval[1]){
                curr_interval[1] = max(curr_interval[1],intervals[i][1]);
                
                //check if we are at the last interval if yes then append to the result
                if(i==intervals.size()-1){
                    res.push_back(curr_interval);
                }
            }
            else{
                res.push_back(curr_interval);
                curr_interval = intervals[i];
                
                if(i==intervals.size()-1){
                    res.push_back(curr_interval);
                }
            }
        }
        return res;
    }
};