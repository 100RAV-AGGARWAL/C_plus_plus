class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int majority = 0;
        int n = nums.size();
        int count = 1;

        if (n == 1)
            return nums[0];

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                count++;

                if (count > n / 2)
                {
                    majority = nums[i];
                    break;
                }
            }
            else
            {
                count = 1;
            }
        }

        return majority;
    }
};