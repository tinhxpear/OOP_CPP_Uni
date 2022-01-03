#include<iostream>
#define endl "\n"
using namespace std ;
class SP{
    private:
        double a, b ;
    public:
        SP(){}
        SP(double A, double B){ a = A ; b = B ;}
        friend istream &operator>>(istream &is, SP &k);
        friend ostream &operator<<(ostream &os, SP &k);
        double operator!();
};
istream &operator>>(istream &is, SP &k)
{
    cout << "Nhap phan thuc : ";
    is>> k.a;
    cout << "Nhap phan ao : ";
    is >> k.b ;
    return is ;
}
ostream &operator<<(ostream &os,SP &k)
{
    if(k.b >= 0)
    {
        os<< k.a << " + " << k.b << "i" << endl ;
    }
    else
    {
        os << k.a << " " << k.b << "i" << endl ;
    }
    return os ;
}
double SP::operator!()
{
    return a*a + b * b  ;
}
int main()
{
    SP s1, s2(1,2) ;
    cout << "Nhap S1 : " << endl ;
    cin >> s1 ;

    cout << "S1 = " << s1 << endl ;
    cout << "S2 = " << s2 << endl ;
    cout << "Tong binh phuong phan thuc va ao cua S1 va S2 la : " << !s1 + !s2 << endl ;
}