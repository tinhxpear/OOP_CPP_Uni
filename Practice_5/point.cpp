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
        Point(){x = 0 ; y = 0 ;}
        Point(double X, double Y)
        {
            x = X ; y = Y ;
        }
        friend istream &operator>>(istream &is, Point &p);
        friend ostream &operator<<(ostream &os, Point &p);
        friend double &operator+( Point &p1,  Point &p2);
        double distanceZero();
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
double Point::distanceZero()
{
    double a = sqrt(x * x + y * y);
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
        void nearZero();
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
    for(int i = 0 ; i < p.size() ; i ++)
    {
        d += (p[i] + p[i + 1]);
    }
    return d ;
}
void nPoint::nearZero()
{
    Point max = p[0];
    int n ;
    for(int i = 0 ; i < p.size() ; i ++)
    {
        if(max.distanceZero() > p[i].distanceZero()){max = p[i]; n = i ;} 
    }
    cout << "Diem gan goc toa do nhat la : Diem thu " << n + 1 << " : " << max ;
}
int main()
{
    nPoint p,z;
    cin >> p ;
    cout << p ;
    cout << "\nTong khoang cach giua cac diem la : " << p.distanceAll() << endl;
    p.nearZero();
}