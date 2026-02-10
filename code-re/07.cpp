// 题目描述
// 一天一只顽猴想去从山脚爬到山顶，途中经过一个有个N个台阶的阶梯，但是这猴子有一个习惯：

// 每一次只能跳1步或跳3步，试问猴子通过这个阶梯有多少种不同的跳跃方式？

// 输入描述
// 输入只有一个整数N（0<N<=50）此阶梯有多少个台阶。

// 输出描述
// 输出有多少种跳跃方式（解决方案数）。

#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
using namespace std;
class Solution {
public:
    int isValid(int n) {
        int arr[10000]={0};
        arr[0]=1;
        arr[1]=1;
        arr[2]=2;
        for(int i=3;i<n;i++)
        {
            arr[i]=arr[i-1]+arr[i-3];
        }
        return arr[49];
    }

    int fun(int n)
    {
        int arr[4]={0};
        arr[0]=1;arr[1]=1;arr[2]=2;
        int ans=0;
        for(int i=0;i<50;i++)
        {
            arr[3]=arr[0]+arr[2];
        }
    }
};
int main()
{
    Solution s;
    cout<<s.isValid(50)<<endl;

    return 0;
}
//当前楼梯的方法仅和该楼梯之前的第三个楼梯和之前一个楼梯有关
