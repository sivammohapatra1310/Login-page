class Solution
{
public:
    long long int reverseDigits(long long int num)
    {
        long long int r = 0;
        while (num > 0)
        {
            r = r * 10 + num % 10;
            num = num / 10;
        }
        return r;
    }
    bool isPalindrome(long long int n)
    {
        long long int r = reverseDigits(n);
        return (r == n);
    }
    long long minimumCost(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        long long int mn = nums[0], mx = nums[nums.size() - 1], avg, ans, res = 0;
        vector<int> v;
        for (long long int it = mn; i <= mx; i++)
        {
            if (isPalindrome(it))
            {
                sum = 0;
                for (int i = 0; i < nums.size(); i++)
                {
                    if (nums[i] >= it)
                        break;
                    else
                        sum += it - nums[i];
                }
                // cout<<sum1-it*nums.size()+(sum*2)<<" ";
                if ((sum1 - it * nums.size() + (sum * 2)) < mini)
                    mini = sum1 - it * nums.size() + (sum * 2);
            }
            long long int i = nums[nums.size() - 1] + 1;
            while (!isPalindrome(i))
            {
                i++;
            }
            v.push_back(i);
            long long int j = nums[0];
            while (!isPalindrome(j))
            {
                j--;
            }
            v.push_back(j);
            long long int sum = 0, sum1 = 0, mini = 1e18;
            for (auto it : nums)
            {
                sum1 += it;
            }
            for (auto it : v)
            {
            }
            return mini;
        }
    };