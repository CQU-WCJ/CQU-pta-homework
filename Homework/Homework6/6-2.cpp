class Student
{
    int m_id;
    string m;

public:
    Student(int a, string m)
    {
        m_id = a;
        this->m = m;
        cout << "Hi!" << a << ' ' << m << '\n';
    }
    Student()
    {
        m_id = 0;
        m = "";
        cout << "Hi!" << m_id << ' ' << '\n';
    }
    void print()
    {
        cout << "Bye!" << m_id << " " << m << '\n';
    }
    ~Student()
    {
        cout << "Bye!" << m_id << " " << m << '\n';
    }
}