#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
using namespace std;
class Solution {
public:
    int  Function(string s,string t) {
        auto pos=s.find(t);
        if(pos!=string::npos)
        {
            return pos+1;
        }
        else
        {
            return -1;
        }
    }
};
int main()
{
    Solution s;
    string S;string t;
    S="AVERDXIVYERDIAN";
    t="RDXI";
    cout<<s.Function(S,t)<<endl;

    return 0;
}

