/**
 * @file HJ5.cpp
 * @author farewelltears
 * @brief https://www.nowcoder.com/practice/8f3df50d2b9043208c5eed283d1d4da6?tpId=37&tqId=21228&rp=1&ru=/exam/oj&qru=/exam/oj&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26pageSize%3D50%26search%3D%26tab%3D%25E5%2590%258D%25E4%25BC%2581%25E7%259C%259F%25E9%25A2%2598%26topicId%3D37&difficulty=undefined&judgeStatus=undefined&tags=&title=
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
    string str;
    int res = 0;
    cin >> str;
    str.erase(0, 2);
    for (auto s : str)
    {
        if (s >= 'A' && s <= 'F')
            res = (s - 'A' + 10) + res * 16;
        else
            res = (s - '0') + res * 16;
    }

    cout << res << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")