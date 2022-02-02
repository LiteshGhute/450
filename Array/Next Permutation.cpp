class Solution {
public:
    void reverse(vector<int>& nums, int i, int j){
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    
    void nextPermutation(vector<int>& nums) {
        int i = nums.size()-2;
        //finding peak element's left from the end
        while(i>=0 && nums[i]>=nums[i+1]){
            i--;
        }
        //find the number to swap with element left to peak element
        if(i>=0){
            int j=nums.size()-1;
            while(j>=0 && nums[i]>=nums[j]){
                j--;
            }
            swap(nums[i],nums[j]);
        }
        //now reverse the remaining array after ith position
        reverse(nums, i+1, nums.size()-1);
    }
};