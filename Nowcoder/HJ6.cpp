/**
 * @file HJ6.cpp
 * @author farewelltears
 * @brief https://www.nowcoder.com/practice/196534628ca6490ebce2e336b47b3607?tpId=37&tqId=21229&rp=1&ru=/exam/oj&qru=/exam/oj&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26pageSize%3D50%26search%3D%26tab%3D%25E5%2590%258D%25E4%25BC%2581%25E7%259C%259F%25E9%25A2%2598%26topicId%3D37&difficulty=undefined&judgeStatus=undefined&tags=&title=
 * @version 0.1
 * @date 2024-02-28
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n / i; i++)
        while (n % i == 0) // i 一定是质数
        {
            printf("%d ", i);
            n /= i;
        }
    if (n > 1)
        printf("%d ", n);

    return 0;
}
// 64 位输出请用 printf("%lld")