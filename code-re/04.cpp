#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
using namespace std;
class Solution {
public:
    int isValid(string s) {

        stack<char>ch;
        string inputline;
        //去除注释以获得输入方式的值
        //getline(cin, inputline);
        inputline = s;
        int cnt=0;//计数
        for (int i = 0; inputline[i]!='\0'; i++)
        {
            char c = inputline[i];
            if (c == '{' || c == '[' || c == '(')//若遇到左括号则入栈
            {
                ch.push(c);
            }
            if (c == ')' || c == '}' || c == ']')//出栈看看有没有不同的
            {
                if (ch.empty())
                {
                    return -1;
                }//若为空则退出

                char mid = ch.top();
                ch.pop();
                if ((c == ')' && mid != '(') || (c == '}' && mid != '{') || (c == ']' && mid != '['))
                {
                    return -1;
                }
                cnt++;
            }
        }
        if (ch.empty())
        {
            return cnt;
        }

        return -1;
    }
};
int main()
{
    Solution s;
    string st = "(())()((()))";
    cout << s.isValid(st) << endl;



    return 0;
}

