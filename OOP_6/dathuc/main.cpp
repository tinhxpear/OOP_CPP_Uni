#include<iostream>
#include<math.h>
class DT
{
    int n ;
    float *a = new float [n + 1];
    float x ; 
    public:
    friend std :: istream &operator>>(std :: istream &is, DT &d);
    friend std :: ostream &operator<<(std :: ostream &os, DT &d);
    float value();

};
std :: istream &operator>>(std :: istream &is, DT &d)
{
    std :: cout << "Nhap so luong bac : ";
    std :: cin >> d.n ;
    for (int i = d.n; i >=0; i--)
    {
        std :: cout << "He so bac " << i << " : ";
        is >> d.a[i];
    }   
    return is ;
}
std :: ostream &operator<<(std :: ostream &os, DT &d)
{
    os << "F(x) = ";
    for (int  i = d.n; i >=0; i--)
    {
        if(i == d.n) os << d.a[i] <<  "x^" << i << " + ";
        else if(i < d.n && i > 1) os << d.a[i] << "x^" << i << " + ";
        else if( i == 1) os << d.a[1] << "x" << " + ";
        else os << d.a[0];
    }
    return os;   
}
float DT :: value()
{
    std :: cout << "\nNhap gia tri x = ";
    std :: cin >> x ;
    float t = 0 ;
    for (int i = n; i >= 0; i--)
    {
        t += a[i]*pow(x,i);
    }
    std :: cout << "F(" << x <<") = ";  return t ;   
}
int main()
{
    DT d;
    std :: cin >> d ;
    std :: cout << d ;
    std :: cout << d.value();  
}