#include<stack>
class Solution {
public:
    int maxDepth(string s) {
        int o = 0;
        int ans = 0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '(')
            {
                o++;
            }
            else if(s[i] == ')')
            {
               ans = max(ans,o);
                o--;
            }
        }
        return ans;
    }
};
