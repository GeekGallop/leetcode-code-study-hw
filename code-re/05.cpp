#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
    int left=0;
    int right=s.size()-1;
    
    for(;left<right;)
    {
        if(!isalnum(s[left]))//判断左边是否为字母数字
        {
            left++;
        }
        else if(!isalnum(s[right]))//判断右边是否为字母数字
        {
            right--;//若不是则移动
        }

        else if(tolower(s[right])==tolower(s[left]))
        {
            right--;
            left++;
        }
        else 
        {
            return false;
        }
    }
    return true;
    };
};
//通过else-if每次仅进行一部分判断，一次进行两部分是否为字符数字的判断，左边判断完下一次循环判断右边是不是子数
//都为字符数字后下一次循环判断是否为同类型字母

int main(void)
{
    Solution s;
    string st = "";
    bool result = s.isPalindrome(st);
    cout<<result<<endl;
    return 0;
}