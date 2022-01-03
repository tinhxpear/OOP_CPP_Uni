#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
#define endl "\n"
class Point
{
    private:
        double x, y ;
    public:
        friend istream &operator>>(istream &is, Point &p);
        friend ostream &operator<<(ostream &os, Point &p);
        friend double &operator+( Point &p1,  Point &p2);
};
istream &operator>>(istream &is, Point &p)
{
    cout << "\nNhap hoanh do : ";
    is >> p.x ;
    cout << "Nhap tung do : ";
    is >> p.y ;
    return is ;
}
ostream &operator<<(ostream &os, Point &p)
{
    os << "(" << p.x << "," << p.y << ")" << endl ;
    return os ;
}
double &operator+( Point &p1,  Point &p2)
{
    double a = sqrt(pow(p2.x - p1.x,2) + pow(p2.y - p1.y,2));
    return a ;
}
class nPoint
{
    private:
        int n ;
        vector<Point> p ;
    public:
        friend istream &operator>>(istream &is, nPoint &nP);
        friend ostream &operator<<(ostream &os, nPoint &nP);
        double distanceAll();
        void distance();
        void areaTriangle();
};
istream &operator>>(istream &is, nPoint &nP)
{
    cout << "\nNhap so luong diem : ";
    is >> nP.n ;
    nP.p.resize(nP.n);
    for(int i = 0 ; i < nP.p.size() ; i ++)
    {
        cout << "\nNhap diem thu " << i + 1 << " : ";
        is >> nP.p[i] ;
    }
    return is;
}
ostream &operator<<(ostream &os, nPoint &nP)
{
    for(int i = 0 ; i < nP.p.size() ; i ++)
    {
        os << endl << "Diem thu " << i + 1 << " : \n" << nP.p[i];
    }
    return os ;
}
double nPoint::distanceAll()
{
    double d = 0 ;
    for(int i = 0 ; i < p.size() - 1 ; i ++)
    {
        d += (p[i] + p[i + 1]);
    }
    return d ;
}
void nPoint::distance()
{
    int a,b;
    double d = 0 ;
    cout << "\nNhap 2 diem b muon tinh khoang cach : \n";
    cout << "From : "; cin >> a ;
    cout << "To : "; cin >> b ;
    for(int i = a - 1 ; i < b - 1 ; i ++)
    {
        d += (p[i] + p[i + 1]);
    }
    cout << "Khoang cach giua hai diem " << a << " diem " << b << " la : " <<  d ;
}
void nPoint::areaTriangle()
{
    double a, b , c, z, S ;
    for(int i = 0 ; i < p.size() ; i ++)
    {
        a = p[0] + p[1] ;
        b = p[1] + p[2] ;
        c = p[2] + p[0] ;
    }
    
    cout << "Chu vi cua tam giac : " << a + b + c << endl ;
    z = (a + b + c)/2 ;
    S = sqrt(z*(z - a)*(z - b)* (z -c));
    cout << "Dien tich tam giac : " << S ;
}
int main()
{
    nPoint p,z;
    cin >> p ;
    cout << p ;
    cout << "\nTong khoang cach giua cac diem la : " << p.distanceAll();
    p.distance();
    cin >> z ;
    z.areaTriangle();
}