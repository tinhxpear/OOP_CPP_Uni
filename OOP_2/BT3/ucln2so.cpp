//Xây dựng hàm tìm UCLN(a,b). Áp dụng tìm UCLN của một dãy N số nguyên.
#include<bits/stdc++.h>
int ucln(int a, int b)
{
    while (a!=b)
    {
    if(a>b) a-= b ;
    else if(a < b ) b-= a ;
    else return a ;
    }
    return a;

    
    
}
int main()
{
    int a, b ;
    std :: cout << "Nhap a = ";
    std :: cin >> a ;
    std :: cout << "Nhap b = ";
    std :: cin >> b ;
    std :: cout << "UCLN cua " << a << " va " << b << " la : " << ucln(a,b);
    
}