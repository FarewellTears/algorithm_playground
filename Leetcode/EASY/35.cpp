/**
 * @file 35.cpp
 * @author farewelltears
 * @brief https://leetcode.cn/problems/search-insert-position/
 * @version 0.1
 * @date 2022-10-30
 *
 * @copyright Copyright (c) 2022
 *
 * Problem: 搜索插入位置
 * Tags: 二分查找
 */
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int l = 0, r = nums.size() - 1;
        while (l < r)
        {
            int mid = (l + r) >> 1;
            if (nums[mid] >= target)
                r = mid;
            else
                l = mid + 1;
        }
        if (nums[l] < target)
            l++;
        return l;
    }
};