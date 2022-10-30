/**
 * @file P2249.cpp
 * @author farewelltears
 * @brief https://www.luogu.com.cn/problem/P2249
 * @version 0.1
 * @date 2022-10-30
 *
 * @copyright Copyright (c) 2022
 *
 * Problem: 【深基13.例1】查找
 * Tags: 二分查找
 */
#include <iostream>

using namespace std;

const int N = 1e6 + 10;
int q[N];

int main()
{
    int n, m, target;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d", &q[i]);
    while (m--)
    {
        scanf("%d", &target);
        int l = 1, r = n;
        while (l < r)
        {
            int mid = (l + r) >> 1;
            if (q[mid] >= target)
                r = mid;
            else
                l = mid + 1;
        }
        if (q[l] != target)
            printf("-1 ");
        else
            printf("%d ", l);
    }
    return 0;
}