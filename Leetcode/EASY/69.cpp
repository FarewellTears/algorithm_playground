/**
 * @file 69.cpp
 * @author farewelltears
 * @brief https://leetcode.cn/problems/sqrtx/
 * @version 0.1
 * @date 2022-10-30
 *
 * @copyright Copyright (c) 2022
 *
 * Problem: x 的平方根
 * Tags: 二分查找
 */
#include <iostream>

using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        double l = 0, r = x;
        while (r - l > 1e-6)
        {
            double mid = (l + r) / 2;
            if (mid * mid >= x)
                r = mid;
            else
                l = mid;
        }
        return (int)(l + (1e-6));
    }
};