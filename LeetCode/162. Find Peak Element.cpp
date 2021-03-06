// 怎样才能彻底掌握二分搜索
class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int m  = l + (r - l) / 2;
            if (nums[m] < nums[m + 1])
                l = m + 1;
            else
                r = m;
        }
        return l;
    }
};
