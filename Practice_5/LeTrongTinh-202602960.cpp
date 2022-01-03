#include<iostream>
#include<iomanip>
using namespace std ;
class Hang
{
    private:
        string maHang, tenHang ;
        int sl;
        double donGia ;
    public:
        void nhap();
        void xuat();
        string getID();
        string getName();
        double getPrice();
};
void Hang::nhap()
{
    cout << "Nhap ma hang : ";
    cin >> maHang ;
    cout << "Nhap ten hang : ";
    fflush(stdin);
    getline(cin,tenHang) ;
    cout << "Nhap so luong : ";
    cin >> sl ;
    cout << "Nhap don gia : ";
    cin >> donGia ;
}
void Hang::xuat()
{
    cout << left << setw(10) << maHang << setw(10) << tenHang << setw(10) << sl << setw(10) << donGia ;
}
string Hang::getID()
{
    return maHang ;
}
string Hang::getName()
{
    return tenHang ;
}
double Hang::getPrice()
{
    return donGia ;
}
class mayGiat:public Hang
{
    private:
        double soCan ;
    public:
        friend istream &operator>>(istream &is, mayGiat &m);
        friend ostream &operator<<(ostream &os, mayGiat &m);
        double getWeight();
};
istream &operator>>(istream &is, mayGiat &m)
{
    m.nhap();
    cout << "Nhap so can : ";
    is >> m.soCan ;
    return is ;
}
ostream &operator<<(ostream &os, mayGiat &m)
{
    m.xuat();
    os << m.soCan << endl ;
    return os ;
}
double mayGiat::getWeight()
{
    return soCan ;
}
int main ()
{
    int n ;
    cout << "Nhap so luong may giat : ";
    cin >> n ;
    mayGiat *m = new mayGiat[n + 1];
    for(int i = 0 ; i < n ; i ++)
    {
        cout << "\nNhap may giat thu " << i + 1 << " : \n";
        cin >> m[i];
    }
    string x ;
    cout << "Nhap ten hoac ma may giat ban muon tim : ";
    fflush(stdin);
    getline(cin,x);
    cout << "May giat ban muon tim la : \n";
    cout << "__________________________________________________________________________________________________\n"; 
    cout << left << setw(10) << "Ma hang" << setw(10) << "Ten hang" << setw(10) << "So luong" << setw(10) << "Don gia" << "So can" << endl ;
    bool check =  false ;
    for(int i = 0 ; i < n ; i ++)
    {
        if(m[i].getName() == x or m[i].getID() == x)
        {
            cout << m[i] ;
            check = true ;
        }
    }
    if(check == false) cout << "\nKhong tim thay may !!!\n";
    mayGiat max = m[0] ;
    for(int i = 0 ; i < n ; i ++)
    {
        if(max.getWeight() > 8 && max.getPrice() > m[i].getPrice())
        {
            max = m[i] ;
        }
    }
    cout << "May giat nang tren 8kg re nhat la : \n";
    cout << "__________________________________________________________________________________________________\n";
    cout << left << setw(10) << "Ma hang" << setw(10) << "Ten hang" << setw(10) << "So luong" << setw(10) << "Don gia" << "So can" << endl ;
    cout << max ;

    
}