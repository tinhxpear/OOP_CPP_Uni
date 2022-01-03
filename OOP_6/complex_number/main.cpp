#include<iostream>
class SP
{
    int a,b ;
    public:
    friend std :: istream &operator>>(std :: istream &is, SP &n);
    friend std :: ostream &operator<<(std :: ostream &os, SP &n);
    SP operator+(SP &n);
};
std :: istream &operator>>(std :: istream &is, SP &n)
{
    std :: cout << "Nhap phan thuc : \na = ";
    is>> n.a;
    std :: cout << "Nhap phan ao : \nb = ";
    is >> n.b ;
    return is ;
}
std :: ostream &operator<<(std :: ostream &os, SP &n)
{
    os << n.a << " + " << n.b << "i" << std :: endl ;
    return os ;
}
SP SP :: operator+(SP &n)
{
    SP t;
    t.a = this->a + n.a ;
    t.b = this->b + n.b;
    return t ;
}
int main()
{
    SP x, y, t ;
    std :: cout << "Nhap x : ";
    std :: cin >> x ;
    std :: cout << "x = " << x ;
    std :: cout << "Nhap y : ";
    std :: cin >> y ;
    std :: cout << "y = " << y ;
    t = x + y ;
    std :: cout << "Tong x + y = " << t ;
}