#include <bits/stdc++.h>
using namespace std;
enum 人类性别
{
    男,
    女,
    其他
};
struct 人类
{
    string 姓名;
    人类性别 性别;
    unsigned int 年龄, 身高, 体重, 三围;
    
};
int main(void)
{
    //具体例子
    人类 *对象 = new 人类;
    对象->姓名 = "宇沢レイサ";
    对象->性别 = 女;

    return 0;
}
