/**
 * @file HJ1.cpp
 * @author farewelltears
 * @brief https://www.nowcoder.com/practice/8c949ea5f36f422594b306a2300315da?tpId=37&tqId=21224&rp=1&ru=/exam/intelligent&qru=/exam/intelligent&sourceUrl=%2Fexam%2Fintelligent&difficulty=undefined&judgeStatus=undefined&tags=&title=
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
    int i = 0;
    char c;
    while ((c = getchar()) != EOF)
    {
        c = tolower(c);
        if (c >= 'a' && c <= 'z')
            i++;
        else if (c == ' ')
            i = 0;
    }
    cout << i << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")