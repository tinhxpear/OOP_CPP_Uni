#include<iostream>
#include<vector>
#define endl "\n"
using namespace std ;
class Rect
{
    private:
        double w,h ;
    public:
        friend istream &operator>>(istream &is, Rect &r);
        friend ostream &operator<<(ostream &os, Rect &r);
        double area();
        bool isSquare();
        double getW();
        double getH();
};
istream &operator>>(istream &is, Rect &r)
{
    cout << "Nhap chieu rong : ";
    is >> r.w ;
    cout << "Nhap chieu cao : ";
    is >> r.h ;
    return is ;
}
double Rect::area()
{
    return w * h ;
}
bool Rect::isSquare()
{
    if(w == h) return 1 ;
    else return 0 ;
}
ostream &operator<<(ostream &os, Rect &r)
{
    os << "Chieu rong : " << r.w << "   ||   Chieu cao : " << r.h ;
    os << "   ||   Dien tich : " << r.area() << endl ;
    return os ;
}
double Rect::getW()
{
    return w ;
}
double Rect::getH()
{
    return h ;
}
class nRect
{
    private:
        int n ;
        vector<Rect> Rs ;
    public:
        friend istream &operator>>(istream &is, nRect &nR);
        friend ostream &operator<<(ostream &os, nRect &nR);
        int numberSquare();
        void biggestRect();
};
istream &operator>>(istream &is, nRect &nR)
{
    cout << "Nhap n hinh chu nhat : ";
    is >> nR.n ;
    nR.Rs.resize(nR.n);
    int c = 1 ;
    for(auto &x:nR.Rs)
    {
        cout << endl <<  "----------------------------------" << endl ;
        cout << "Nhap hinh chu nhat thu " << c ++ << " : " << endl ;
        is >> x ;
    }
    return is ;
}
ostream &operator<<(ostream &os, nRect &nR)
{
    int c = 1 ;
    for(auto x:nR.Rs)
    { 
        os << endl <<  "----------------------------------" << endl ;
        os << "Hinh chu nhat thu " << c ++ << endl ;
        os << x ;   
    }
    return os ;
}
int nRect::numberSquare()
{
    int c = 0;
    for(auto &x:Rs)
    {
        if( x.getH() == x.getW()) c ++ ;
    }
    return c ;
}
void nRect::biggestRect()
{
    Rect max = Rs[0] ;
    int c = 0 ;
    int d ;
    for(auto x:Rs)
    {
        c ++ ;
        if(max.area() < x.area())
        {
            d = c ;
            max = x ;
        }
    }
    cout << "Hinh chu nhat thu " << d << " : " <<  max ;
}
int main()
{
    nRect r ;
    cin >> r ;
    cout << r ;
    cout << "\nSo luong hinh vuong la : " << r.numberSquare() << endl ;
    cout << "Hinh chu nhat lon nhat la : " ; r.biggestRect() ;
}