#include<iostream>
#include<iomanip>
#define endl "\n"
using namespace std; 
class QLH
{
    private:
        string maHang, tenHang, xuatXu ;
        int loaiHang ;
    public:
        void input();
        void output();
        int getType();
        string getName();
};
void QLH::input()
{
    cout << "Nhap ma hang : ";
    fflush(stdin);
    getline(cin, maHang);
    cout << "Nhap ten hang : ";
    getline(cin,tenHang);
    cout << "Nhap xuat xu : ";
    getline(cin,xuatXu);
    cout << "Nhap loai hang : ";
    cin >> loaiHang ;
    while(loaiHang != 1 && loaiHang != 2 &&loaiHang != 3)
    {
        cout << "Loai hang khong ton tai!!!\nMoi ban nhap lai : ";
        cin >> loaiHang ;
    }
}
void QLH:: output()
{
    cout << left << setw(12) << maHang << setw(12)  << "||" << setw(12) << tenHang << setw(12) << "||" << setw(12) << xuatXu << setw(12) << "||" << setw(12) << loaiHang << setw(12) << "||";
}
int QLH::getType()
{
    return loaiHang ;
}
string QLH::getName()
{
    return tenHang ;
}
class dienTu:public QLH
{
    private:
        double tgbh ;
    public:
        friend istream &operator>>(istream &is, dienTu &d);
        friend ostream &operator<<(ostream &os, dienTu &d);
        double getTime();
};
istream &operator>>(istream &is, dienTu &d)
{
    d.input();
    cout << "Nhap thoi gian bao hanh (thang) : ";
    is >> d.tgbh ;
    return is ;
}
ostream &operator<<(ostream &os, dienTu &d)
{
    d.output();
    os << left << d.tgbh << endl ; 
    return os ;
}
double dienTu::getTime()
{
    return tgbh ;
}
int main()
{
    int n ;
    cout << "Nhap so luong hang : ";
    cin >> n ;
    dienTu *d = new dienTu[n + 1] ;
    for(int i = 0 ; i < n ; i ++)
    {
        cout << "Nhap mat hang thu " << i + 1 << " : \n";
        cin >> d[i];
    }
    cout << "\n\nCac mat hang loai 1 co thoi gian bao hanh tren 12 thang : \n";
    cout << left << setw(12) << "Ma hang" << setw(12)  << "||" << setw(12) << "Ten hang" << setw(12) << "||" << setw(12) << "Xuat xu" << setw(12) << "||" << setw(12) << "Loai hang" << setw(12) << "||" << "Thoi gian bao hanh" << endl ;
    cout << "_____________________________________________________________________________________________________________________________________________________\n";
    for(int i = 0 ; i < n ; i ++)
    {
        if(d[i].getType() == 1 && d[i].getTime() >= 12) cout << d[i] ;
    }
    cout << "\nCac mat hang loai 2 co thoi gian bao hanh tren 12 thang : \n";
    cout << left << setw(12) << "Ma hang" << setw(12)  << "||" << setw(12) << "Ten hang" << setw(12) << "||" << setw(12) << "Xuat xu" << setw(12) << "||" << setw(12) << "Loai hang" << setw(12) << "||" << "Thoi gian bao hanh" << endl ;
    cout << "_____________________________________________________________________________________________________________________________________________________\n";
    for(int i = 0 ; i < n ; i ++)
    {
        if(d[i].getType() == 2 && d[i].getTime() >= 12) cout << d[i] ;
    }
    cout << "\nCac mat hang loai 3 co thoi gian bao hanh tren 12 thang : \n";
    cout << left << setw(12) << "Ma hang" << setw(12)  << "||" << setw(12) << "Ten hang" << setw(12) << "||" << setw(12) << "Xuat xu" << setw(12) << "||" << setw(12) << "Loai hang" << setw(12) << "||" << "Thoi gian bao hanh" << endl ;
    cout << "_____________________________________________________________________________________________________________________________________________________\n";
    for(int i = 0 ; i < n ; i ++)
    {
        if(d[i].getType() == 3 && d[i].getTime() >= 12) cout << d[i] ;
    }
    string a ;
    cout << "\n\nNhap ten hang ban muon tim : ";
    fflush(stdin);
    getline(cin,a);
    bool check = false ;
    for(int i = 0 ; i < n ; i ++)
    {
        if(d[i].getName() == a)
        {
            cout << d[i] ;
            check = true ;
        }
    }
    if(check == false) cout << "\nKhong tim thay mat hang !!!\n";
}