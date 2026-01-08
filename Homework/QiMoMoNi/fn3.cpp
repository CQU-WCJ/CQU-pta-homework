class Fruit
{
protected:
    int weight;

public:
    Fruit(int a) : weight(a)
    {
        cout << "Fruit Constructor\n";
    }
    virtual void display()
    {
        cout << "weight=" << weight << '\n';
    }
    virtual ~Fruit()
    {
        cout << "Fruit Destructor\n";
    }
};
class Banana : public Fruit
{
private:
    string origin;

public:
    Banana(string s, int a) : Fruit(a), origin(s)
    {
        cout << "Banana Constructor\n";
    }
    void display()
    {
        cout << "origin=" << origin << ",weight=" << weight << '\n';
    }
    ~Banana()
    {
        cout << "Banana Destructor\n";
    }
};