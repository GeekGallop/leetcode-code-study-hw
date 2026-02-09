#include <string>
#include <iostream>
using namespace std;
// 给定字符串 target和 source，判断 target是否为 source 的子序列。

// 你可以认为target和 source 中仅包含英文小写字母。

// 字符串 source 可能会很长（长度~=500,000），而 target是个短字符串（长度<=100)。

// 字符串的一个子序列是原始字符串删除一些（也可以不删除）字符而不改变剩余字符相对位置形成的新字符串。

// （例如，”abc”是”aebycd”的一个子序列，而”ayb”不是）。

// 请找出最后一个子序列的起始位置。
class Solution {
public:
    int posstring(string target, string source)
    {
        //两字符串的指针均指向最后面刀者找
        int t_right = target.size() - 1;
        int s_right = source.size() - 1;

        while (t_right != -1)//未到目标值开头始终计数
        {
            if (source[s_right] == target[t_right])
            {
                t_right--;//相等则目标值左移
            }
            s_right--;
            if(s_right==-1&&t_right!=-1)
            {
                return -1;
            }
        }
        return s_right+1;//最后输出时会继续左移一位需回正
    }

};



int main() {
    Solution s;
  
    // 测试用例1
    string target1 = "abc";
    string source1 = "abcaybec";
    cout << s.posstring(target1, source1) << endl; // 应输出: 3
  
    // 测试用例2 - 找不到的情况
    string target2 = "xyz";
    string source2 = "abcaybec";
    cout << s.posstring(target2, source2) << endl; // 应输出: -1
  
    // 测试用例3 - 只有一个匹配
    string target3 = "abc";
    string source3 = "aabbcc";
    cout << s.posstring(target3, source3) << endl; // 应输出: 2
  
    return 0;
}
//找到对应倒数的位置反过来想


//测试完成时间 ---20min