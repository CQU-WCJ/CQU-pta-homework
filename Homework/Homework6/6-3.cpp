class HugeInteger
{
private:
    string num;

public:
    HugeInteger() : num("0") {}

    HugeInteger(const string &str)
    {
        num = str;
    }

    HugeInteger(long long n)
    {
        num = to_string(n);
    }

    HugeInteger add(const HugeInteger &other) const
    {
        string result;
        int carry = 0;
        int i = num.length() - 1;
        int j = other.num.length() - 1;

        while (i >= 0 || j >= 0 || carry > 0)
        {
            int digit1 = (i >= 0) ? num[i] - '0' : 0;
            int digit2 = (j >= 0) ? other.num[j] - '0' : 0;

            int sum = digit1 + digit2 + carry;
            carry = sum / 10;
            result.push_back((sum % 10) + '0');

            i--;
            j--;
        }

        reverse(result.begin(), result.end());
        return HugeInteger(result);
    }

    HugeInteger operator+(const HugeInteger &other) const
    {
        return add(other);
    }

    HugeInteger operator+(int n) const
    {
        return *this + HugeInteger(n);
    }

    friend ostream &operator<<(ostream &os, const HugeInteger &hi)
    {
        os << hi.num;
        return os;
    }
};
