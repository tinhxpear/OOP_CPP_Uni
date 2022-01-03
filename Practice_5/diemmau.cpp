#include<iostream>
#include<math.h>
using namespace std ;
#define endl "\n"
class Toado
{
    private:
        double x, y ;
    public:
        void input();
        void output();
        double distanceZero();
};
void Toado::input()
{
    cout << "\nNhap hoanh do : ";
    cin >> x ;
    cout << "Nhap tung do : ";
    cin >> y ;
}
void Toado::output()
{
    cout << "(" << x << "," << y <<")" ;
}
double Toado::distanceZero()
{
    return sqrt( x*x + y *y);
}
class diemMau :public Toado
{
    private:
        int x ;
    public:
        friend istream &operator>>(istream &is, diemMau &d);
        friend ostream &operator<<(ostream &os, diemMau &d);
        int getX();

};
istream &operator>>(istream &is, diemMau &d)
{
    d.input();
    cout << "Nhap ma mau : ";
    is >> d.x ;
    return is;
}
ostream &operator<<(ostream &os, diemMau &d)
{
    d.output();
    if(d.x == 1) os << " Toa do mau do" << endl ;
    else if(d.x == 2) os << " Toa do mau vang " << endl ;
    else if( d.x == 3) os << " Toa do mau xanh " << endl ;
    else os << " Ma mau khong xac dinh" << endl ;
}
int diemMau::getX()
{
    return x ;
}
int main()
{
    int n ;
    cout << "Nhap so luong diem mau : ";
    cin >> n  ;
    diemMau *a  = new diemMau[n + 1];
    for(int i = 0 ; i < n ; i ++)
    {
        cout << "\nNhap diem thu " << i + 1 << " : \n"; 
        cin >> a[i];
    }
    int r = 0, y = 0, g = 0 ;
    for(int i = 0 ; i < n ; i ++)
    {
        if(a[i].getX() == 1) r ++ ;
        if(a[i].getX() == 2) y ++ ;
        if(a[i].getX() == 3) g ++ ;
    }
    cout << "So diem mau do la : " << r  << endl ;
    cout << "So diem mau vang la : " << y << endl ;
    cout << "So diem mau xanh la : " << g << endl ;
    diemMau max = a[0];
    double d = 0 ; ;
    for(int i = 0 ; i < n ; i ++)
    {
        if(max.distanceZero() < a[i].distanceZero())
        {
            max = a[i] ;
            d = a[i].distanceZero();
        }
    }
    cout << "\nDiem co khoang cach lon nhat den goc toa do la : " << max << " Voi khoang cach la " << d << endl  ;
    
}