/**
 * @file 56.合并区间.cpp
 * @author farewelltears
 * @brief https://leetcode.cn/problems/merge-intervals/
 * @version 0.1
 * @date 2024-03-25
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        if (intervals.size() < 2)
            return intervals;

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> res;
        res.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] < res.back()[1])
                res.back()[1] = max(res.back()[1], intervals[i][1]);
            else
                res.push_back(intervals[i]);
        }
        return res;
    }
};

class Solution
{
public:
    static bool cmp(const vector<int> &l, const vector<int> &r)
    {
        return l[0] < r[0];
    }

    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        if (intervals.size() < 2)
            return intervals;

        // 从小到大排序
        sort(intervals.begin(), intervals.end(), cmp); // 时间复杂度 O(nlogn)

        vector<vector<int>> res;
        int i = 0;
        while (i < intervals.size()) // 时间复杂度 O(n)
        {
            vector<int> cur = intervals[i];
            int j = i + 1;
            while (j < intervals.size() && intervals[j][0] <= cur[1])
            {
                cur[1] = max(cur[1], intervals[j][1]);
                j++;
            }
            res.push_back(cur);
            i = j;
        }
        return res;
    }
};
