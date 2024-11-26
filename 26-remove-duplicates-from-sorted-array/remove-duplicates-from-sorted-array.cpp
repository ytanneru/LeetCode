class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        if(nums.size()==1)
            return 1;
        else{
            for(int i = 1; i < nums.size(); i++){
                if(nums[i] != nums[i-1]){
                    nums[j] = nums[i];
                    j++;
                }
            }
        }
        return j;
    }
};