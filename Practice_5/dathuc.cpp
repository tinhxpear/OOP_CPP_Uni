#include<iostream>
#include<math.h>
using namespace std ;
class DT
{
    private:
        int n ;
        double *a ;
        double x ; 
    public:
        DT(){
            n = 0 ;
            a = NULL ;
        }
        DT(int N){n = N ; a = new double[n + 1] ;}
        ~DT(){delete a ;}
        friend istream &operator>>(istream &is, DT &d);
        friend ostream &operator<<(ostream &os, DT &d);
        DT operator=(DT &d);
        double value();
        double daoham();


};
istream &operator>>(istream &is, DT &d)
{
    cout << "Nhap so luong bac : ";
    cin >> d.n ;
    d.a = new double[d.n + 1];
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
double DT :: value()
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
DT DT:: operator=(DT &d)
{
    n = d.n ;
    a = new double[d.n + 1];
    for(int i = 0 ; i <= n ; ++i)
    {
        a[i] = d.a[i] ;
    }
    return d ;
}
double DT::daoham()
{
    cout << "\nNhap gia tri x  = " ;
    cin >> x ;
    double s ;
    for(int i = n ; i > 0 ; i --)
    {
        s +=a[i]*i*pow(x,i-1);
    }
    cout << "\nGia tri dao ham cua da thuc la F(" << x << ") = " ;return s ;
}
int main()
{
    DT d ;
    cin >> d ;
    cout << d ;
    cout << d.daoham();
}