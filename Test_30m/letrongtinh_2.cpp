#include<iostream>
#define endl "\n"
using namespace std ;
class Monhoc
{
    private:
        string ma, ten;
        int tinchi;
    public:
        friend istream &operator>>(istream &is, Monhoc &m);
        friend ostream &operator<<(ostream &os, Monhoc &m);
};
istream &operator>>(istream &is, Monhoc &m)
{
    cout << "Nhap ma mon hoc : ";
    fflush(stdin);
    getline(is,m.ma);
    cout << "Nhap ten mon hoc : ";
    getline(is,m.ten);
    cout << "Nhap so tin chi : ";
    is >> m.tinchi;
    return is ;
}
ostream &operator<<(ostream &os, Monhoc &m)
{
    os << m.ma << " || " << m.ten << " || " << m.tinchi << endl ;
    return os ;
}
class DKHP
{
    private: 
        string msv,tsv;
        Monhoc *m ;
        int n ;
    public:
        friend istream &operator>> (istream &is, DKHP &d);
        friend ostream &operator<<(ostream &os, DKHP &d);
};
istream &operator>> (istream &is, DKHP &d)
{
    cout << "Nhap ma sinh vien : ";
    fflush(stdin);
    getline(is,d.msv);
    cout << "Nhap ten sinh vien : ";
    getline(is,d.tsv);
    cout << "Nhap so luong mon hoc : ";
    cin >> d.n ;
    for(int i = 0 ; i < d.n ; i ++)
    {
        cin >> d.m[i];
    }
}
ostream &operator<<(ostream &os, DKHP &d)
{
    os << d.msv << " || " << d.tsv << " || " ;
    for ( int i = 0 ; i < d.n ; i ++)
    {
        cout << d.m[i];
    }
    
}
int main()
{
    DKHP d ;
    cin >> d ;
    cout << d ;
}