#include<iostream>
class Time
{
    short int second;
    short int minute;
    short int hour;
    short int day;
    short int month;
    short int year; 
    public: 
    bool condition_t();
    bool condition_d();
    bool condition_m();
    bool condition_y(); 
    void input();
    void output();
};
// Condition time ==========================================================================================
bool Time :: condition_t()
{
    if(second<0 || second >59 || minute < 0 || minute >59 || hour < 0 || hour >23) return false;
    else return true;
}
// Condition  day =====================================================================================

bool Time :: condition_d()
{
    if(day > 0 && day < 32) return true;
    else return false;
}
// Condition month =====================================================================================

bool Time ::condition_m()
{
    bool m ;
    {
        if((month < 0 && month > 12)||((month == 4 ||month == 6 ||month == 9 ||month == 11) && day == 31) || ((month ==2) && day > 29)) return m = false;
        else return m = true;
    }
}
// Condition year =====================================================================================

bool Time :: condition_y()
{
    if(((year %400 == 0 || year % 4 == 0) && (month == 2 && day>29))||(year %4 != 0 && (month == 2 && day > 28))) return false;
    else return true;
}
void Time :: input()
{
    std :: cout << "Nhap giay : ";
    std :: cin >> second;
    while (condition_t() == false)
    {
    std :: cout << "Ban da nhap sai, yeu cau ban nhap lai !!!\nNhap giay : ";
    std :: cin >> second;
    }
    //Nhap giay===========================
    std :: cout << "Nhap phut : ";
    std :: cin >> minute;
    while (condition_t() == false)
    {
    std :: cout << "Ban da nhap sai, yeu cau ban nhap lai !!!\nNhap phut : ";
    std :: cin >> minute;
    }
    // Nhap phut ===================================
    std :: cout << "Nhap gio : ";
    std :: cin >> hour;
    while (condition_t() == false)
    {
    std :: cout << "Ban da nhap sai, yeu cau ban nhap lai !!!\nNhap gio : ";
    std :: cin >> hour;
    }
    // Nhap gio =======================================
    std :: cout << "Nhap ngay : ";
    std :: cin >> day;
    while (condition_d() == false)
    {
    std :: cout << "Ban da nhap sai, yeu cau ban nhap lai !!!\nNhap ngay : ";
    std :: cin >> day;
    }
    // Nhap ngày =====================================================
    std :: cout << "Nhap thang : ";
    std :: cin >> month;
    while (condition_m() == false)
    {
    std :: cout << "Ban da nhap sai, yeu cau ban nhap lai !!!\nNhap thang : ";
    std :: cin >> month;
    }
    // Nhap thang ==========================================================
    std :: cout << "Nhap nam : ";
    std :: cin >> year;
    while (year < 0 ||condition_y() == false)
    {
    std :: cout << "Ban da nhap sai, yeu cau ban nhap lai !!!\nNhap thang : ";
    std :: cin >> year;  
    }
    // Nhap nam ===================================================================    
}
void Time:: output()
{
    std :: cout << "Thoi gian cua ban la : "  <<  hour << "h : " << minute <<"m : " << second << "s / " << day << " / " <<  month << " / " << year ;
}
int main()
{
    Time d;
    d.input();
    d.output();
}