#include<iostream>
#include<iomanip>
using namespace std ;
class matHang
{
    private:
        string maHang ;
        long long donGia ;
    public:
        friend istream &operator>>(istream &is, matHang &m);
        friend ostream &operator<<(ostream &os, matHang &m);
        string getID();
        long long getMoney();
};
istream &operator>>(istream &is, matHang &m)
{
    cout << "Nhap ma hang : ";
    fflush(stdin) ; getline(is,m.maHang) ;
    cout << "Nhap don gia : "; is >> m.donGia ;
    return is ;
}
ostream &operator<<(ostream &os, matHang &m)
{
    os << m.maHang << setw(20) << m.donGia << endl;
    return os ;
}
string matHang::getID()
{
    return maHang ;
}
long long matHang::getMoney()
{
    return donGia ;
}
class hoaDon
{
    private:
        string maHang, date ;
        int sl ;
    public:
        friend istream &operator>>(istream &is, hoaDon &h);
        friend ostream &operator<<(ostream &os, hoaDon &h);
        int getQuantily();
        string getDate();
        string getID();

};
istream &operator>>(istream &is, hoaDon &h)
{
    cout << "Nhap ma hang : ";
    fflush(stdin); getline(is,h.maHang);
    cout << "Nhap ngay ban : "; is >> h.date ;
    cout << "Nhap so luong hang : "; is >> h.sl ;
    return is ;
}
ostream &operator<<(ostream &os, hoaDon &h)
{
    os << h.maHang << setw(20) << h.date << h.sl << endl ;
    return os ;
}
int hoaDon::getQuantily()
{
    return sl ;
}
string hoaDon::getDate()
{
    return date ;
}
string hoaDon::getID()
{
    return maHang ;
}
int main()
{
    int m,n ;
    cout << "Nhap so luong mat hang : "; cin >> m ;
    cout << "Nhap so luong hoa don : "; cin >> n ;
    matHang *a = new matHang[m + 1] ;
    hoaDon *b = new hoaDon[n + 1];
    cout << "\nNhap thong tin mat hang : \n";
    for(int i = 0 ; i < m ; i ++)
    {
        cout << "Mat hang thu " << i + 1 << " : \n";
        cin >> a[i];
    }
    cout << "\nNhap thong tin hoa don : \n";
    for(int i = 0 ; i < n ; i ++)
    {
        cout << "\nHoa don thu " << i + 1 << " : \n";
        cin >> b[i];
    }
    int c = 0 ;
    for(int i = 0 ; i < n ; i ++)
    {
        if(b[i].getQuantily() > 10) c++ ;
    }
    cout << "So hoa don co so luong lon hon 10 : " << c << " hoa don\n";
    string d ;
    long long money = 0 ;
    cout << "Nhap ngay ban muon biet doanh thu : \n";
    fflush(stdin); getline(cin,d);
    for(int i = 0 ; i < n ; i ++)
    {
        if(b[i].getDate() == d)
        {
            for(int j = 0 ; j < n ; j ++)
            {
                if(a[j].getID() == b[i].getID())
                {
                    money += b[i].getQuantily() * a[i].getMoney();
                }
            }
        }
    }
    cout << "Doanh thu ngay " << d << " la : " << money << " VND\n";
}