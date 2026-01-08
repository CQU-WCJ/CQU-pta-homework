#include <iostream>
#include <string>
using namespace std;

struct girlfriend
{
    string name;
    long long age;
    girlfriend(string name1, long long a)
    {
        name = name1;
        age = a;
    }
    void Say()
    {
        cout << "你好，我是" << name << ",现在" << age << "岁了\n";
    }
} girl[100];

int main()
{
    cin >> girl[0].name >> girl[0].age;
    cin >> girl[1].name >> girl[1].age;
    cin >> girl[2].name >> girl[2].age;
    girl[0].Say();
    girl[1].Say();
    girl[2].Say();
}