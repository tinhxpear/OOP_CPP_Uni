#include<iostream>
#include<math.h>
using namespace std ;
class Point
{
    private:
    double x, y ;
    public:
    Point(){x = y = 0.0;}
    Point(double x1, double y1) { x = x1 ; y = y1 ;}
    friend istream &operator>>( istream &is, Point &p);
    friend  ostream &operator<<( ostream &os, Point &p);

};
istream &operator>>( istream &is, Point &p)
{
    cout << "Nhap toa do x : ";
    is >> p.x ;
    cout << "Nhap toa do y : ";
    is >> p.y ;
    return is;
}
ostream &operator<<( ostream &os, Point &p)
{
    os << "(" << p.x << " , " << p.y << ")" <<  endl;
    return os ;
}
class Circle :public Point
{
    private: 
    double r ;
    public:
    Circle(){r = 0 ;}
    Circle(double x1, double y1, double r1) :Point(x1,y1)
    {
        r = r1 ;
    }
    friend istream &operator>>(istream &is, Circle &c);
    friend ostream &operator<<(ostream &os, Circle &c);
    double bk(double x1, double y1, double r1) ;
};
istream &operator>>(istream &is, Circle &c)
{

}
double Circle ::bk(double x1, double y1, double r1)
{  
    r1 = sqrt(x1*x1 + y1*y1);
    return r1 ;
}
int main()
{
    Circle a ;
    cout << "Nhap toa do ban kinh duong tron a : \n";
    cin >> a ;
    cout <<"r_a = " <<  a ;
    // std :: cout << "Ban kinh cua hinh tron a = " << a.bk(x1,y1,r1);
}