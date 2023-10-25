#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main(void)
{
    // 初始化
    bool RUN = true; // 程序是否可以继续运行
    cin.clear();     // 清除错误状态

    // UI
    cout <<
        R"(my-object v0.0.1-alpha by xiao_2
*****************************

*****************************
[1] View object
[2] Management object
[0] Exit

请按指定键执行操作...)";

    while (RUN)
    {
        switch (_getch()-'0')
        {
        case 0: // 退出程序
            RUN = false;
            break;
        case 1: // 查看对象
            break;
        case 2: // 管理对象
            break;
        default:
            break;
        }
    }
    return 0;
}
