class Student
{
public:
    void addPair()
    {
        for (int i = 0; i < 2; i++)
        {
            Student *dui = welcome[i];
            if (dui->pair != nullptr)
            {
                continue;
            }
            else if (this == dui->welcome[0] || this == dui->welcome[1])
            {
                pair = dui;
                break;
            }
            else if (dui->welcome[0]->pair != nullptr && dui->welcome[1]->pair != nullpt)
            {
                pair = dui;
                break;
            }
        }
    }
    void printPair()
    {
        if (pair == nullptr)
            return;
        cout << name << ":" << pair->name << '\n'
    };
};