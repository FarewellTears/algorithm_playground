/**
 * @file P1138.cpp
 * @author farewelltears
 * @brief https://www.luogu.com.cn/problem/P1177
 * @version 0.1
 * @date 2022-10-29
 *
 * @copyright Copyright (c) 2022
 *
 * Problem: [模板] 快速排序
 * Tags: 快排
 */
#include <iostream>

using namespace std;

int q[100010];

void quick_sort(int q[], int l, int r)
{
    if (l >= r)
        return;
    int x = q[(l + r) >> 1], i = l - 1, j = r + 1;
    while (i < j)
    {
        do
            i++;
        while (q[i] < x);
        do
            j--;
        while (x < q[j]);
        if (i < j)
            swap(q[i], q[j]);
    }
    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);
    quick_sort(q, 0, n - 1);
    for (int i = 0; i < n; i++)
        printf("%d ", q[i]);
    return 0;
}