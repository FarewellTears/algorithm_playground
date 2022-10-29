/**
 * @file 1768.cpp
 * @author farewelltears
 * @brief https://leetcode.cn/problems/merge-strings-alternately/description/
 * @version 0.1
 * @date 2022-10-30
 *
 * @copyright Copyright (c) 2022
 *
 * Problem: 交替合并字符串
 * Tags: 归并排序
 */
#include <iostream>

using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int i = 0, n = min(word1.size(), word2.size());
        string res;
        while (n--)
        {
            res += word1[i];
            res += word2[i++];
        }
        while (i < word1.size())
            res += word1[i++];
        while (i < word2.size())
            res += word2[i++];
        return res;
    }
};