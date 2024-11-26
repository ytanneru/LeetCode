class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0; // index acts as a pointer to the position in the array where the next valid element (an element that isn't equal to val) should be placed.

        for(int i = 0; i < nums.size(); i++){ 
            // For each element nums[i], the condition if (nums[i] != val) checks whether the current element is valid (i.e., not equal to val).
            if(nums[i] != val){ 
                //If the current element nums[i] is valid, it is copied to the position indicated by index.
                nums[index++] = nums[i];  
            }
        }
        return index;
    }
};