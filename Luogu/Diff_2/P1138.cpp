/**
 * @file P1138.cpp
 * @author farewelltears
 * @brief https://www.luogu.com.cn/problem/P1138
 * @version 0.2
 * @date 2022-10-28
 *
 * @copyright Copyright (c) 2022
 *
 * Problem: 第 k 小整数
 * Tags: 快排
 */
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 10010;
int q[N];

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
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);
    // 或 使用 sort(q, q + n);
    quick_sort(q, 0, n - 1);
    int i = 0;
    for (; i < n && k > 1; i++, k--)
        while (q[i] == q[i + 1])
            i++;
    if (i < n)
        printf("%d", q[i]);
    else
        printf("NO RESULT");
    return 0;
}