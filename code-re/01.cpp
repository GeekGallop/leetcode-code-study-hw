#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(void)
{
    string inputline;
    getline(cin, inputline);
    stringstream ss(inputline);
    int key = 0;

    bool is_selected = false; // 选中状态，统一用false更直观
    string screen;            // 屏幕内容
    string clip;              // 剪切板内容

    while (ss >> key)
    {
        switch (key)
        {
        case 1:
            // 逻辑对齐Python：选中则清空屏幕
            if (is_selected == true)
            {
                screen = "";
            }
            // 添加字符'a'
            screen += "a";
            // 强制取消选中（核心修改1：和Python一致，执行命令1后必取消选中）
            is_selected = false;
            break;

        case 2:
            // 复制：选中状态下，清空剪切板并复制屏幕内容
            if (is_selected == true)
            {
                clip = "";
                clip = screen;
            }
            break;

        case 3:
            // 剪切：对齐Python逻辑（核心修改2）
            if (is_selected == true)
            {
                clip = "";
                clip = screen;    // 先复制屏幕内容到剪切板
                screen = "";      // 再清空屏幕
                is_selected = false; // 取消选中状态
            }
            break;

        case 4:
            // 粘贴：选中则清空屏幕，然后粘贴剪切板内容，最后取消选中
            if (is_selected == true)
            {
                screen = "";
            }
            screen += clip;
            is_selected = false;
            break;

        case 5:
            // 选中：屏幕非空则设为选中状态
            is_selected = (screen.size() > 0);
            break;
        }
    }
    // 输出屏幕内容长度
    cout << screen.size() << endl;
    return 0;
}