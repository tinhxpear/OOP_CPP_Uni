#include<iostream>
#include<algorithm>
class Fraction
{
    int ts,ms;
    public:
    friend std :: istream &operator>> (std :: istream &is, Fraction &s);
    friend std :: ostream &operator<< (std :: ostream &os, Fraction &s);
    Fraction operator+(Fraction &s);
    Fraction operator*(Fraction &s);
    Fraction operator++();
    Fraction operator++(int);
};
std :: istream &operator>>(std :: istream &is, Fraction &s)
{
    std :: cout << "Nhap tu so : ";
    is >> s.ts;
    std :: cout << "Nhap mau so : ";
    is >> s.ms;
    return is ;
}
std :: ostream &operator<<(std :: ostream &os, Fraction &s)
{
    os << s.ts/std ::__gcd(s.ts,s.ms) << " / " << s.ms/std :: __gcd(s.ts,s.ms) << std :: endl;
    return os ;
}
Fraction Fraction :: operator+(Fraction &s)
{
    Fraction t ;
    t.ts = this->ts/std ::__gcd(this->ts,this->ms) + s.ts/std ::__gcd(s.ts,s.ms) ;
    t.ms = this->ms/std ::__gcd(this->ts,this->ms) + s.ms/std ::__gcd(s.ts,s.ms);
    return t;
}
Fraction Fraction::operator*(Fraction &s)
{
    Fraction t ;
    t.ts = this->ts/std ::__gcd(this->ts,this->ms) * s.ts/std ::__gcd(s.ts,s.ms) ;
    t.ms = this->ms/std ::__gcd(this->ts,this->ms) * s.ms/std ::__gcd(s.ts,s.ms);
    return t;
}
Fraction Fraction :: operator++() // s = ++a;
{
    ts += ms;
    return (*this);
}
Fraction Fraction ::operator++(int) // s = a++;
{
    Fraction t ;
    t = (*this);
    ts += ms;
    return t;
}
int main()
{
    Fraction a, b, c, d, e;
    std :: cout << "Nhap phan so a : \n";
    std :: cin >> a;
    std :: cout << "Phan so a = " << a ;
    std :: cout << "Nhap phan so b : \n";
    std :: cin >> b;
    std :: cout << "Phan so b =  " << b;
    c = a + b;
    d = a * b;
    std :: cout << "a + b = " << c ;
    std :: cout << "a * b = " << d ;
    e = ++d ;
    std :: cout << "Ket qua cua a * b sau khi cong cong truoc : " << e ;
    e = d++;
    std :: cout << "Ket qua cua a * b sau khi cong sau : " << e ;
}