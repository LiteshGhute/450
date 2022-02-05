class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    
        int i=0;
        int j=0;
        int sum=0;
        int count=INT_MAX;
        
        while(j<nums.size()){
            sum+=nums[j];
            
            if(sum>=target){
                while(sum>=target){
                    sum -= nums[i];
                    i++;
                }
                count = min(count, (j-i+2));
            }
            j++;
        }
        if(count == INT_MAX)
            return 0;
        return count;
    }
};