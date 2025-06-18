class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = (n-1);
        int index = -1;
        while(low<=high){
            int mid = low + (high-low)/2;

            if(nums[mid]==target){
                index = mid;
            }

            if(nums[mid]>nums[0]){  //target in 1st block
                if(target>nums[0] && target<nums[mid]){
                    high = mid-1;
                }
                else low = mid + 1;
            }
            if(nums[mid]<=nums[0]){  //target in 2nd block
                if(target>nums[mid] && target<nums[n-1]){
                    low = mid + 1;
                }
                else high = low - 1;
            }
        }
        return index;
    }
};