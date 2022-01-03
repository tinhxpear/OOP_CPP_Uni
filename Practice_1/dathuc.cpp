#include<iostream>
#include<math.h>
#include<vector>
using namespace std ;
class DT
{
    private:
        int n ;
        vector <double> a ;
        double x ; 
    public:
        friend istream &operator>>(istream &is, DT &d);
        friend ostream &operator<<(ostream &os, DT &d);
        float value();

};
istream &operator>>(istream &is, DT &d)
{
    cout << "Nhap so luong bac : ";
    cin >> d.n ;
    d.a.resize(d.n + 1);
    for (int i = d.n; i >=0; i--)
    {
        cout << "He so bac " << i << " : ";
        is >> d.a[i];
    }   
    return is ;
}
ostream &operator<<(ostream &os, DT &d)
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
    cout << "\nNhap gia tri x = ";
    cin >> x ;
    float t = 0 ;
    for (int i = n; i >= 0; i--)
    {
        t += a[i]*pow(x,i);
    }
    cout << "F(" << x <<") = ";  return t ;   
}
int main()
{
    DT d;
    cin >> d ;
    cout << d ;
    cout << d.value();  
}