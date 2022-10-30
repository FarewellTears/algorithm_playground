/**
 * @file 34.cpp
 * @author farewelltears
 * @brief https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array/description/
 * @version 0.1
 * @date 2022-10-30
 *
 * @copyright Copyright (c) 2022
 *
 * Problem: 在排序数组中查找元素的第一个和最后一个位置
 * Tags: 二分查找
 */
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int left = -1, right = -1, _size = nums.size();
        if (_size)
        {
            int l = 0, r = _size - 1;
            while (l < r)
            {
                int mid = (l + r) >> 1;
                if (nums[mid] >= target)
                    r = mid;
                else
                    l = mid + 1;
            }
            if (nums[l] == target)
            {
                left = l;
                int l = 0, r = _size - 1;
                while (l < r)
                {
                    int mid = (l + r + 1) >> 1;
                    if (nums[l] <= target)
                        l = mid;
                    else
                        r = mid - 1;
                }
                right = l;
            }
        }
        return {left, right};
    }
};