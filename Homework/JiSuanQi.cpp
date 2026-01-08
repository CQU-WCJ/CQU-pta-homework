#include <bits/stdc++.h>
using namespace std;

void suan(stack<double> &a, stack<char> &b)
{
    double ans = 1;
    double num2 = a.top();
    a.pop();
    double num1 = a.top();
    a.pop();
    char fu = b.top();
    b.pop();
    if (fu == '+')
        a.push(num1 + num2);
    if (fu == '-')
        a.push(num1 - num2);
    if (fu == '*')
        a.push(num1 * num2);
    if (fu == '/')
        a.push(num1 / num2);
    if (fu == '%')
        a.push(double(int(num1) % int(num2)));
    if (fu == '^')
    {
        for (int i = 0; i < num2; i++)
        {
            ans *= num1;
        }
        a.push(ans);
    }
    if (fu == '.')
    {
        while (num2 > 1)
        {
            num2 /= 10;
        }
        a.push(num1 + num2);
    }
}

double getc(char a)
{
    if (a == '+' || a == '-')
    {
        return 1;
    }
    else if (a == '*' || a == '/' || a == '%')
    {
        return 2;
    }
    else if (a == '^')
    {
        return 3;
    }
    else if (a == '(')
    {
        return 0;
    }
    else
        return 4;
}

int main()
{
    string s;
    getline(cin, s);
    stack<double> a;
    stack<char> b;
    double num = 0;
    bool found = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            num = num * 10 + (s[i] - '0');
            found = true;
        }
        else if (s[i] == '.' || s[i] == '-' || s[i] == '%' || s[i] == '/' || s[i] == '*' || s[i] == '+' || s[i] == '^')
        {
            if (found)
            {
                a.push(num);
                found = false;
                num = 0;
            }
            if (!b.empty() && getc(s[i]) <= getc(b.top()) && b.top() != '(')
            {
                suan(a, b);
            }
            b.push(s[i]);
        }
        else if (s[i] == '(')
        {
            if (found)
            {
                a.push(num);
                found = false;
                num = 0;
            }
            b.push(s[i]);
        }
        else if (s[i] == ')')
        {
            a.push(num);
            found = false;
            num = 0;
            while (b.top() != '(')
            {
                suan(a, b);
            }
            b.pop();
        }
    }
    if (found)
    {
        a.push(num);
    }
    while (!b.empty())
    {
        suan(a, b);
    }
    cout << a.top();
}