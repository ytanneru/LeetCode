class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1; // Array nums1's actual index
        int j = n - 1; // Array nums2's actual index
        int k = m + n - 1; // Array nums1's next to fill positions
        
        while (j >= 0)
            if (i >= 0 && nums1[i] > nums2[j])
                nums1[k--] = nums1[i--];
            else
                nums1[k--] = nums2[j--];
    }
};