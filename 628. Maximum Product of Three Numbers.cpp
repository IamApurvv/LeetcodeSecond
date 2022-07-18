class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int k = nums.size();
        int pr = nums[0] * nums[1] * nums[k - 1];
        int pr2 = nums[k - 1] * nums[k - 2] * nums[k - 3];
        return max(pr, pr2);
    }
};