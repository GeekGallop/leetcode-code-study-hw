// 编写一个函数来查找 字符串数组 中的最长公共后缀如果不存在公共后缀，返回固定字符串:@Zero.
// 补充说明:
// 1、字符串长度范围:[2,1000];

// 2、字符串中字符长度范围为[1，126]
// 输入描述
// ["abc" "bbc" c]
// 输出描述
// "c"

// 示例1：
// 输入:
// ["abc","bbc","c"]
// 输出:
// "c"
// 说明:
// 返回公共后缀: c


// 示例2：
// 输入:
// ["aa" , "bb","cc"]
// 输出:
// "@Zero"
// 说明:
// 不存在公共后缀，返回固定结果: @Zero
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string Function(vector<string> st) {
        if (st.empty()) return "@Zero";//为空直接返回
      
        string s = st[0];
        reverse(s.begin(), s.end());//找第一个字符串进行比较
        int min_len = s.length();
      
        for (int i = 1; i < st.size(); i++) {
            string temp = st[i];
            reverse(temp.begin(), temp.end());//反转字符串
          
            int cnt = 0;
            for (int j = 0; j < temp.size() && j < s.size(); j++) {
                if (temp[j] == s[j]) {
                    cnt++;
                } else {
                    break;
                }
            }
          
            if (cnt == 0) {
                return "@Zero";
            }
            min_len = min(min_len, cnt);
        }
      
        if (min_len == 0) return "@Zero";
      
        string result = s.substr(0, min_len);
        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution s;
  
    // 测试用例1
    vector<string> st1 = {"abc", "bbc", "c"};
    cout << s.Function(st1) << endl;  // 应输出: c
  
    // 测试用例2
    vector<string> st2 = {"aa", "aa", "aa"};
    cout << s.Function(st2) << endl;  // 应输出: @Zero
  
    return 0;
}