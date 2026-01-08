#include <iostream>
#include <cmath>
#include <string>
#include <stack>
#include <cctype>
#include <stdexcept>
using namespace std;

// 函数声明
double evaluateExpression(const string &expression);                    // 评估表达式 （用于移除空格）
double evaluateSimpleExpression(const string &expression);              // 评估简单表达式
size_t findMatchingParenthesis(const string &expression, size_t start); // 查找匹配括号
double applyOperator(char op, double left, double right);               // 应用操作符

int main()
{
    string expression;
    cout << "请输入数学表达式: ";
    getline(cin, expression);

    try
    {
        double result = evaluateExpression(expression);
        cout << "结果: " << result << endl;
    }
    catch (const exception &e)
    {
        cout << "错误: " << e.what() << endl;
    }

    return 0;
}

double evaluateExpression(const string &expression)
{
    string processed;

    for (char c : expression)
    {
        if (!isspace(c))
        {
            processed += c;
        }
    }

    return evaluateSimpleExpression(processed);
}

double evaluateSimpleExpression(const string &expression)
{
    if (expression.empty())
    {
        return 0.0;
    }

    // 处理括号
    for (size_t i = 0; i < expression.size(); i++)
    {
        if (expression[i] == '(')
        {
            size_t end = findMatchingParenthesis(expression, i);
            if (end == string::npos)
            {
                throw runtime_error("括号不匹配");
            }

            // 递归计算括号内的表达式
            string innerExpr = expression.substr(i + 1, end - i - 1);
            double innerResult = evaluateSimpleExpression(innerExpr);

            // 构建新的表达式字符串
            string newExpr = expression.substr(0, i) +
                             to_string(innerResult) +
                             expression.substr(end + 1);
            return evaluateSimpleExpression(newExpr);
        }
    }

    // 处理加减法（从右向左，因为加减法是左结合的）
    for (int i = expression.size() - 1; i >= 0; i--)
    {
        if (expression[i] == '+' || expression[i] == '-')
        {
            // 确保不是负号
            if (i > 0 && (isdigit(expression[i - 1]) || expression[i - 1] == ')'))
            {
                double left = evaluateSimpleExpression(expression.substr(0, i));
                double right = evaluateSimpleExpression(expression.substr(i + 1));
                return applyOperator(expression[i], left, right);
            }
        }
    }

    // 处理乘除法（从右向左）
    for (int i = expression.size() - 1; i >= 0; i--)
    {
        if (expression[i] == '*' || expression[i] == '/')
        {
            double left = evaluateSimpleExpression(expression.substr(0, i));
            double right = evaluateSimpleExpression(expression.substr(i + 1));
            return applyOperator(expression[i], left, right);
        }
    }

    // 处理乘方（从右向左，因为乘方是右结合的）
    for (int i = expression.size() - 1; i >= 0; i--)
    {
        if (expression[i] == '^')
        {
            double left = evaluateSimpleExpression(expression.substr(0, i));
            double right = evaluateSimpleExpression(expression.substr(i + 1));
            return pow(left, right);
        }
    }

    // 处理函数调用（如log, sin, cos等）
    if (expression.find("log") == 0)
    {
        double arg = evaluateSimpleExpression(expression.substr(3));
        return log10(arg);
    }
    if (expression.find("ln") == 0)
    {
        double arg = evaluateSimpleExpression(expression.substr(2));
        return log(arg);
    }
    if (expression.find("sin") == 0)
    {
        double arg = evaluateSimpleExpression(expression.substr(3));
        return sin(arg);
    }
    if (expression.find("cos") == 0)
    {
        double arg = evaluateSimpleExpression(expression.substr(3));
        return cos(arg);
    }
    if (expression.find("tan") == 0)
    {
        double arg = evaluateSimpleExpression(expression.substr(3));
        return tan(arg);
    }
    if (expression.find("sqrt") == 0)
    {
        double arg = evaluateSimpleExpression(expression.substr(4));
        return sqrt(arg);
    }

    // 如果是数字，直接转换
    try
    {
        return stod(expression);
    }
    catch (const exception &)
    {
        throw runtime_error("无效的表达式: " + expression);
    }
}

size_t findMatchingParenthesis(const string &expression, size_t start)
{
    int count = 1;
    for (size_t i = start + 1; i < expression.size(); i++)
    {
        if (expression[i] == '(')
        {
            count++;
        }
        else if (expression[i] == ')')
        {
            count--;
            if (count == 0)
            {
                return i;
            }
        }
    }
    return string::npos; // 没有找到匹配的括号
}

double applyOperator(char op, double left, double right)
{
    switch (op)
    {
    case '+':
        return left + right;
    case '-':
        return left - right;
    case '*':
        return left * right;
    case '/':
        if (right == 0)
        {
            throw runtime_error("除以零错误");
        }
        return left / right;
    default:
        throw runtime_error("未知的操作符");
    }
}
