/**
 * @file P1138.cpp
 * @author farewelltears
 * @brief https://www.luogu.com.cn/problem/P1138
 * @version 0.1
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

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);
    sort(q, q + n);
    int i = 0;
    for (; i < n && k > 1; i++, k--)
    {
        while (q[i] == q[i + 1])
        {
            i++;
        }
    }
    if (i < n)
        printf("%d", q[i]);
    else
        printf("NO RESULT");
    return 0;
}
