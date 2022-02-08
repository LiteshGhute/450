class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0;
        int r=n-1;
        int mid;
        while(l<=r){
            mid=(l+r)>>1;
            if(nums[mid]==target){
                return mid;
            }
            //check left half is sorted or not
            else if(nums[mid] >= nums[l]){
                //check if the target lies in the sorted part or not
                if(target>=nums[l] && target<=nums[mid]){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            //check right half is sorted or not
            else{
               //check if the target lies in the range or not
                if(target>=nums[mid] && target<=nums[r]){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
        }
        return -1;
    }
};