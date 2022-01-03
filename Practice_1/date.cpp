#include<iostream>
#define endl "\n"
using namespace std ;
class Date
{
    private:
        int day , month, year ;
    public:
        friend istream &operator>>(istream &is, Date &d);
        friend ostream &operator<<(ostream &os, Date &d);
        friend Date operator++(Date &d);
        int nhuan();
        friend int &operator+(Date &d1, Date &d2);
};
int Date::nhuan()
{
    return year%400 == 0 or (year %4 == 0 && year%100 != 0);
}
istream &operator>>(istream &is, Date &d)
{
    cout << "Nhap thoi gian (ngay/thang/nam) : \n";
    char c ;
    is >> d.day >> c >> d.month >> c >> d.year ;
    while(d.day > 31 or d.day < 1 or d.month > 12 or d.month < 1 or d.year < 0)
    {
        cout << "Ban da nhap sai !!! \nVui long nhap lai : \n";
        is >> d.day >> c >> d.month >> c >> d.year ;
    }
    return is ;
}
ostream &operator<<(ostream &os, Date &d)
{
    os << d.day << "/" << d.month << "/" << d.year << endl ;
    return os ;
}
Date operator++(Date &d)
{
    int t[] = {0, 31, 28 + d.nhuan(), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(d.day == t[d.month])
    {
        d.day = 1 ;
        d.month ++ ;
    }
    else d.day ++ ;
    if(d.month == 13)
    {
        d.month = 1 ;
        d.year ++ ;
    }
}
int &operator+(Date &d1, Date &d2)
{
    int c = 0 ;
    while(d1.day != d2.day)
    {
        ++d1;
        ++c ;
    }
    return c ;
}
int main()
{
    Date d,z ;
    cin >> d ;
    cout << "Ngay ban vua nhap la : " << d ;
    ++ d ;
    cout << "Ngay tiep theo la : " << d ;
    cout << "Nhap moc thoi gian de tinh so ngay : ";
    cin >> z ;
    cout << "So ngay giua 2 moc thoi gian la : " << d + z ;
}