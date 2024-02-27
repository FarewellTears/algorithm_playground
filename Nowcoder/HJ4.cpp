/**
 * @file HJ4.cpp
 * @author farewelltears
 * @brief https://www.nowcoder.com/practice/d9162298cb5a437aad722fccccaae8a7?tpId=37&tqId=21227&rp=1&ru=/exam/oj&qru=/exam/oj&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26pageSize%3D50%26search%3D%26tab%3D%25E5%2590%258D%25E4%25BC%2581%25E7%259C%259F%25E9%25A2%2598%26topicId%3D37&difficulty=undefined&judgeStatus=undefined&tags=&title=
 * @version 0.1
 * @date 2024-02-28
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int i = 0;
    string str = "";
    char c;
    while ((c = getchar()) != '\n')
    {
        i++, str += c;
        if (i != 0 && i % 8 == 0)
        {
            cout << str << endl;
            i = 0, str = "";
        }
    }

    if (i > 0 && i < 8)
    {
        cout << str;
        while (i < 8)
        {
            i++;
            cout << "0";
        }
    }
    return 0;
}
// 64 位输出请用 printf("%lld")