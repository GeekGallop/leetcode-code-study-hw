
#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
using namespace std;
class Solution {
public:
    int findpos(vector<int>num1,int target1) {
        vector<int>num;int target;
        string inputline;
        getline(cin,inputline);
        stringstream ss(inputline);
        string temp;
        while(getline(ss,temp,','))
        {
            num.push_back(stoi(temp));
        }

        cin>>target;
        auto it =lower_bound(num.begin(),num.end(),target);
        int pos=it-num.begin();
        return pos+1;
    }
};
int main()
{
    Solution s;
    vector<int>num={93,95,97,100,102,123,155};
    cout<<s.findpos(num,110)<<endl;

    return 0;
}

//  getline(cin,input)
//  getline(ss,temp,',')