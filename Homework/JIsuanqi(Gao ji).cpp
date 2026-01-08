#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(string s)
    {
        int res = 0;
        stack<int> sum;
        char sign = '+';
        int num = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
                num = 10 * num + s[i] - '0';
            if (s[i] == '(')
            {
                int left = i++, count = 1;
                while (count > 0)
                {
                    if (s[i] == '(')
                        count++;
                    else if (s[i] == ')')
                        count--;
                    i++;
                }
                num = solve(s.substr(left + 1, i - left - 2));
                i--;
            }
            if (i == s.size() - 1 || s[i] == '+' || s[i] == '-' || s[i] == '*')
            {
                if (sign == '+')
                    sum.push(num);
                else if (sign == '-')
                    sum.push(-num);
                else if (sign == '*')
                    sum.top() *= num;
                sign = s[i];
                num = 0;
            }
        }
        while (!sum.empty())
        {
            res += sum.top();
            sum.pop();
        }
        return res;
    }
};