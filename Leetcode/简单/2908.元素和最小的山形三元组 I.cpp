/**
 * @file 2908.cpp
 * @author farewelltears
 * @brief https://leetcode.cn/problems/minimum-sum-of-mountain-triplets-i/description/
 * @version 0.1
 * @date 2024-03-29
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int minimumSum(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> f(n); // 保存当前元素左边所有元素的最小值，即前缀最小值
        vector<int> g(n); // 保存当前元素右边所有元素的最小值，即后缀最小值

        f[0] = nums[0];
        for (int i = 1; i < n - 1; i++)
            f[i] = min(f[i - 1], nums[i]);

        g[n - 1] = nums[n - 1];
        for (int i = n - 2; i; i--)
            g[i] = min(g[i + 1], nums[i]);

        int res = INT_MAX;
        // 枚举山头
        for (int i = 1; i < n - 1; i++)
            // 如果构成山
            if (nums[i] > f[i - 1] && nums[i] > g[i + 1])
                res = min(res, nums[i] + f[i - 1] + g[i + 1]);
        return res == INT_MAX ? -1 : res;
    }
};

// 优化
class Solution
{
public:
    int minimumSum(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> g(n); // 保存当前元素右边所有元素的最小值，即后缀最小值

        g[n - 1] = nums[n - 1];
        for (int i = n - 2; i; i--)
            g[i] = min(g[i + 1], nums[i]);

        int res = INT_MAX;
        int f = nums[0]; // 前缀最小值和答案一起算，因为前缀最小值一定是山的头
        for (int i = 1; i < n - 1; i++)
        {
            if (nums[i] > f && nums[i] > g[i + 1]) // 如果构成山
                res = min(res, nums[i] + f + g[i + 1]);
            f = min(f, nums[i]); // 边更新前缀最小值
        }
        return res == INT_MAX ? -1 : res;
    }
};