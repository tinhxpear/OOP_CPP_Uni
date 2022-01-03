#include<iostream>
#include<math.h>
class Point
{
    int x, y ;
    public:
    friend std :: istream &operator>>(std :: istream &is, Point &p);
    friend std :: ostream &operator<<(std :: ostream &os, Point &p);
    float kc(Point &p);
    Point &operator=(Point &p);
    Point &operator*(Point &p);
};
Point &Point :: operator=(Point &p)
{
    this->x = p.x ;
    this->y = p.y ;
    return (*this);
}
std :: istream &operator>>(std :: istream &is, Point &p)
{
    std :: cout << "Nhap toa do x = ";
    is >> p.x ;
    std :: cout << "Nhap toa do y = ";
    is >> p.y ;
    return is ;
}
std :: ostream &operator<<(std :: ostream &os, Point &p)
{
    os << "(" << p.x << "," << p.y << ")" << std :: endl;
    return os ;
}
float Point ::kc(Point &p)
{
    return sqrt(pow(p.x - this->x,2) + pow(p.y - this->y,2));
}
Point &Point ::operator*(Point &p)
{
    x = this->x * p.x;
    y = this->y * p.y;
    return (*this);
}
int main()
{
    Point a, b, c;
    std :: cout << "Nhap a : \n";
    std :: cin >> a ;
    std :: cout << "a = " << a;
    std :: cout << "Nhap b : \n";
    std :: cin >> b ;
    std :: cout << "b = " << b ;
    std :: cout << "Khoang cach giua a va b la : " << a.kc(b) ;
    c = a * b;
    std :: cout << "\nTich cua a * b = " << c ;
}