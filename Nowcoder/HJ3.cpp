/**
 * @file HJ3.cpp
 * @author farewelltears
 * @brief https://www.nowcoder.com/practice/3245215fffb84b7b81285493eae92ff0?tpId=37&tqId=21226&rp=1&ru=/exam/oj&qru=/exam/oj&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26pageSize%3D50%26search%3D%26tab%3D%25E5%2590%258D%25E4%25BC%2581%25E7%259C%259F%25E9%25A2%2598%26topicId%3D37&difficulty=undefined&judgeStatus=undefined&tags=&title=
 * @version 0.1
 * @date 2024-02-28
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <set>
using namespace std;

const int N = 1010;

int main()
{
    int n, a;
    set<int> s;
    cin >> n;
    while (n--)
    {
        cin >> a;
        s.insert(a);
    }

    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << endl;

    return 0;
}
// 64 位输出请用 printf("%lld")