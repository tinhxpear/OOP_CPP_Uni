#include<iostream>
#include<iomanip>
#define endl "\n"
using namespace std ;
class Thisinh
{
    private:
        string hoten;
        double diem ;
    public:
        void input();
        void output();
        double getPoint();
};
void Thisinh::input()
{
    cout << "Nhap ho ten thi sinh : ";
    fflush(stdin); getline(cin,hoten);
    cout << "Nhap diem : "; cin >> diem ;
}
void Thisinh::output()
{
    cout << hoten << "  ||  " << diem << endl ;
}
double Thisinh::getPoint()
{
    return diem ;
}
class Olympic:public Thisinh
{
    private:
        char truong ;
    public:
        friend istream &operator>>(istream &is, Olympic &o);
        friend ostream &operator<<(ostream &os, Olympic &o);
        char getSchool();
};
istream &operator>>(istream &is, Olympic &o)
{
    o.input();
    cout << "Nhap ten truong : ";
    is >> o.truong ;
    while(o.truong != 'A' && o.truong != 'B' && o.truong != 'C')
    {
        cout << "Truong ban nhap khong ton tai !!! Vui long nhap lai ten truong : ";
        is >> o.truong ;
    }
    return is ;
}
ostream &operator<<(ostream &os, Olympic &o)
{
    o.output();
    os << o.truong ;
    return os ;
}
char Olympic::getSchool()
{
    return truong ;
}
int main()
{
    int n ;
    cout << "Nhap so luong thi sinh : ";
    cin >> n ;
    Olympic *o = new Olympic[n + 1];
    for(int i = 0 ; i < n ; i ++)
    {
        cout << "Thi sinh thu " << i + 1 << " : \n";
        cin >> o[i];
    }
    double a = 0,b = 0,c = 0 ;
    int d = 0, e = 0, f = 0 ;
    for(int i = 0 ; i < n ; i ++)
    {
        if(o[i].getSchool() == 'A')
        {
            a += o[i].getPoint();
            d ++ ;
        }
        else if(o[i].getSchool() == 'B')
        {
            b += o[i].getPoint() ;
            e ++ ;
        } 
        else
        {
            c += o[i].getPoint();
            f ++ ;
        } 
    }
    cout << left << setw(20) << "Truong" << setw(20) <<  "A" << setw(20) << "B" << "C" << endl ;
    cout << left << setw(20) << "Tong diem" << setw(20) << a << setw(20) << b << c << endl ;
    cout << left << setw(20) << "So luong thi sinh" << setw(20) << d << setw(20) << e << f << endl ; 
    if(a > b && a > c) cout << "Truong A co tong diem cao nhat !!!";
    if(b > a && b > c) cout << "Truong B co tong diem cao nhat !!!";
    if(c > a && c > b) cout << "Truong C co tong diem cao nhat !!!";

}