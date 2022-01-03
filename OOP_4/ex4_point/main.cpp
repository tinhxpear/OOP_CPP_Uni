#include<iostream>
#include<math.h>
class Point
{
    private:
    float x, y ;
    public:
    void input();
    void output();
    float distance();
    float distance( const Point &d);
    friend float distance(const Point &d1, const  Point &d2);
};
void Point :: input()
{
    std :: cout << "\nEnter x = ";
    std :: cin >> x ;
    std :: cout << "Enter y = ";
    std :: cin >> y ;
}
void Point :: output()
{
    std :: cout << "(" << x << " , " << y << ")" << std :: endl;
}
float Point ::distance()
{
    return sqrt(x*x + y*y);
}
float Point :: distance( const Point &d)
{
    return sqrt(abs(x*x - d.x*d.x) + abs(y*y - d.y*d.y));
}
float distance( const Point &d1, const  Point &d2)
{
    return sqrt(abs(pow(d1.x,2) - pow(d2.x,2)) + abs(pow(d1.y,2) - pow(d2.y,2)));
}
int main()
{
    Point a ,d , d1 ,d2 ;
    std :: cout << "Tinh khoang cach tu diem A den goc toa do ===================================================================\n";
    std :: cout << "Nhap toa do diem A : ";
    a.input();
    std :: cout << "Toa do diem A : "; a.output();
    std :: cout << "\nKhoang cach tu diem den goc toa do la : " << a.distance();

    std :: cout << "\nTinh khoang cach tu diem A den diem D ========================================================================\n";
    std :: cout << "Nhap toa do diem D : ";
    d.input();
    std :: cout<< "Toa do diem D = "; d.output();
    std :: cout << "Khoang cach tu diem A den diem D = " << a.distance(d);

    std :: cout << "\nTinh khoang cach tu d1 den d2 =======================================================\n";
    std :: cout << "Nhap toa do D1 = ";
    d1.input();
    std :: cout << "D1 = ";d1.output();
    std :: cout << "\nNhap toa do D2 : ";
    d2.input();
    std :: cout << "D2 = ";d2.output();
    std :: cout << "Khoang cach tu D1 den D2 = " << distance(d1,d2);
}