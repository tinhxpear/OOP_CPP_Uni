#include<iostream>
#include<vector>
#include<iomanip>
using namespace std ;
#define endl "\n"
class Student
{
    private:
        string ten ;
        double dtb ;
    public:
        friend istream &operator>>(istream &is, Student &s);
        friend ostream &operator<<(ostream &os, Student &s);
        string getName();
        double getPoint();
};
istream &operator>>(istream &is, Student &s)
{
    cout << "\nNhap ten sinh vien : ";
    fflush(stdin);
    getline(is,s.ten);
    cout << "Nhap diem trung binh : ";
    is >> s.dtb ;
    return is ;
}
ostream &operator<<(ostream &os, Student &s)
{
    os << left << setw(16) << s.ten  << "   ||   " << s.dtb << endl ;
    return os ;
}
string Student::getName()
{
    return ten ;
}
double Student::getPoint()
{
    return dtb ;
}
class Students
{
    private:
        int  n;
        vector <Student> ss ;
    public:
        friend istream &operator>>(istream &is, Students &s);
        friend ostream &operator<<(ostream &os, Students &s);
        void operator++();
        void findName();
        void maxPoint();
        void eraseS();
        
};
istream &operator>>(istream &is, Students &s)
{
    cout << "Nhap so luong sinh vien : ";
    is >> s.n ;
    s.ss.resize(s.n);
    for(int i = 0 ; i < s.ss.size() ; i ++)
    {
        cout << "\nSinh vien thu " << i + 1 << " : \n";
        is >> s.ss[i];
    }
    return is ;
}
ostream &operator<<(ostream &os, Students &s)
{
    os << left << setw(20) << "Ten" << "  ||  " << "Diem\n";
    os <<"-----------------------------------------------------------------\n";
    for(int i = 0 ; i < s.ss.size() ; i ++)
    {
        os << i + 1 << ". " << s.ss[i];
    }
    return os ;
}
void Students :: operator++()
{
    Student a ;
    cout << "\nNhap ten sinh vien muon them : \n";
    cin >> a ;
    ss.push_back(a);
    ss.resize(n + 1);
}
void Students::findName()
{
    string a ;
    cout << "Nhap ten sinh vien can tim : ";
    fflush(stdin);
    getline(cin,a);
    cout << "\nSinh vien ban can tim la : \n";
    bool check = false ;
    cout << left << setw(17) << "Ten" << "  ||  " << "Diem\n";
    cout <<"-----------------------------------------------------------------\n";
    for(int i = 0 ; i < ss.size() ; i ++)
    {
        if(ss[i].getName() == a)
        {
            cout << ss[i];
            check = true ;
        }
    }
    if(check == false) cout << "\nKhong tim thay sinh vien !!!";
}
void Students::maxPoint()
{
    Student max = ss[0];
    for(int i = 0 ; i < ss.size() ; i ++)
    {
        if(max.getPoint() < ss[i].getPoint()) max = ss[i];
    }
    cout << "\nSinh vien co diem trung binh cao nhat la : \n";
    cout << left << setw(17) << "Ten" << "  ||  " << "Diem\n";
    cout <<"-----------------------------------------------------------------\n";
    cout << max ;
}
void Students::eraseS()
{
    int a ;
    cout << "Ban muon xoa sinh vien so  : ";
    cin >> a ;
    for(auto it = ss.begin(); it != ss.end(); it ++)
    {
        if(it == (ss.begin() + a - 1))
        {
            ss.erase(it);
        }
    }
}
int main()
{
    Students s ;
    cin >> s ;
    cout << s ;
    ++s ;
    cout << "\nDanh sach da them : \n";
    cout << s ;
    s.findName();
    s.maxPoint();
    s.eraseS();
    cout << s ;
}