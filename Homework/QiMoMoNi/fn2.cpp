Vec2::Vec2(double u, double v)
{
    this->u = u;
    this->v = v;
}
Vec2 Vec2::operator+(const Vec2 &b)
{
    return Vec2(u + b.u, v + b.v);
}
bool operator!=(const Vec2 &a, const Vec2 &b)
{
    return (a.u != b.u) || (a.v != b.v);
}
ostream &operator<<(ostream &os, const Vec2 &c)
{
    os << "u=" << c.u << ",v=" << c.v;
    return os;
}
istream &operator>>(istream &is, Vec2 &c)
{
    is >> c.u >> c.v;
    return is;
}