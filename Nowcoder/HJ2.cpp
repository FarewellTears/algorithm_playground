/**
 * @file HJ2.cpp
 * @author farewelltears
 * @brief https://www.nowcoder.com/practice/a35ce98431874e3a820dbe4b2d0508b1?tpId=37&tqId=21225&rp=1&ru=/exam/oj&qru=/exam/oj&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26pageSize%3D50%26search%3D%26tab%3D%25E5%2590%258D%25E4%25BC%2581%25E7%259C%259F%25E9%25A2%2598%26topicId%3D37&difficulty=undefined&judgeStatus=undefined&tags=&title=
 * @version 0.1
 * @date 2024-02-28
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <cstring>
using namespace std;

const int N = 40; // 26+10+1=37
int cnt[N];

int main()
{
    string str;
    getline(cin, str);
    for (auto c : str)
    {
        if (c >= 'a' && c <= 'z')
            cnt[c - 'a']++;
        else if (c >= 'A' && c <= 'Z')
            cnt[c - 'A']++;
        else if (c >= '0' && c <= '9')
            cnt[c - '0' + 26]++;
        else if (c == ' ')
            cnt[37]++;
    }

    char t;
    cin >> t;
    if (t >= 'a' && t <= 'z')
        cout << cnt[t - 'a'] << endl;
    else if (t >= 'A' && t <= 'Z')
        cout << cnt[t - 'A'] << endl;
    else if (t >= '0' && t <= '9')
        cout << cnt[t - '0' + 26] << endl;
    else if (t == ' ')
        cout << cnt[37] << endl;

    return 0;
}
// 64 位输出请用 printf("%lld")