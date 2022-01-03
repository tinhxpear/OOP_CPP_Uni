#include<iostream>
#include<iomanip>
#define endl "\n"
using namespace std ;
class HCN
{
    private:
        double length, width ;
    public: 
        friend istream &operator>>(istream &is, HCN &h);
        friend ostream &operator<<(ostream &os, HCN &h);
        double Area();
};
istream &operator>>(istream &is, HCN &h)
{
    cout << "Nhap chieu dai : ";
    is >> h.length ;
    cout << "Nhap chieu rong : ";
    is >> h.width ;
    return is ;
}
ostream &operator<<(ostream &os, HCN &h)
{
    os << "Chieu dai : " << h.length << "   ||   Chieu rong : " <<  h.width << endl ;
    return os ;
}
double HCN::Area()
{
    return length * width ;
}
int main()
{
    int n ; 
    cout << "Nhap so luong hinh chu nhat : ";
    cin >> n ;
    HCN *h = new HCN[n + 1];
    for(int i = 0 ; i < n ; i ++)
    {
        cout << "\n\nHinh chu nhat thu " << i + 1 << " : \n";
        cin >> h[i];
    }
    double t = 0 ;
    for(int i = 0 ; i < n ; i ++)
    {
        t += h[i].Area();
    }
    cout << "\nDien tich trung binh cac hinh chu nhat la : " << t/n << endl ;
    HCN min = h[0];
    int c = 0 ;
    for(int i = 0 ; i < n ; i ++)
    {
        if(min.Area() > h[i].Area())
        {
            
            min = h[i] ;
            c = i ;
        }
    }
    cout << "\nHinh chu nhat co dien tich nho nhat la : Hinh chu nhat thu " << c + 1 << " : " << min ;
}