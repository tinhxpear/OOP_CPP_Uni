#include<iostream>
#define endl "\n"
using namespace std;
class Sach
{
    private:
        string masach,tensach,tacgia;
        int xuatban;
    public:
        Sach(){}
        Sach(string ma, string ten, string tg, int nam)
        {
            masach =  ma ;
            tensach =  ten ;
            tacgia = tg ;
            xuatban =  nam ;
        }
        friend istream &operator>>(istream &is, Sach &s);
        friend ostream &operator<<(ostream &os, Sach &s);
        string getName();
        int getNam();
};
istream &operator>>(istream &is, Sach &s)
{
    cout << "Nhap ma sach : ";
    fflush(stdin);
    getline(is,s.masach);
    cout << "Nhap ten sach : ";
    getline(is,s.tensach);
    cout << "Nhap ten tac gia : ";
    getline(is,s.tacgia);
    cout << "Nhap nam xuat ban : ";
    is >> s.xuatban ;
    return is ;

}
ostream &operator<<(ostream &os, Sach &s)
{
    os << s.masach << " || " << s.tensach << " || " << s.tacgia << " || " << s.xuatban << endl ;
    return os ;
}
string Sach::getName()
{
    return tensach ;
}
int Sach::getNam()
{
    return xuatban ;
}
int main()
{
    int n ;
    cout << "Nhap so dau sach : ";
    cin >> n ;
    Sach *s = new Sach[n + 1];
    for(int i = 0 ; i < n ; i ++)
    {
        cout << "Nhap thong tin sach thu " << i + 1 << " : " << endl ;
        cin >> s[i];
    }
    cout << "Ma sach  ||  Ten sach  ||  Tac gia  ||  Nam xuat ban " << endl ;
    for (int i = 0 ; i < n ; i ++)
    {
        cout << s[i];
    }
    cout << "Nhap ten cuon sach muon tim : ";
    string find ;
    fflush(stdin);
    getline(cin,find);
    bool check = false ;
    for(int i = 0 ; i < n ; i ++)
    {
        if(find == s[i].getName())
        {
            check = true ;
            cout << s[i];
            break ;
        }
        else
        {
            check = false ;
        }
    }
    if(check == false) cout << "Khong tim thay sach !!!";
    for(int i = 0 ; i < n ; i ++)
    {
        if(s[i].getNam() < 2000)
        {
            cout << s[i];
        }
    }
}