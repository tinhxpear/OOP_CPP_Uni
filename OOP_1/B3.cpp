// Nhập một số tự nhiên n, kiểm tra số đó có phải số nguyên tố không
#include<iostream>
using namespace std ;
void songuyento(int n)
{
    int dem = 0;
    if(n < 2)
    {
        cout << "Day khong phai so nguyen to !!";
        exit(0);
        
    }
    for (int i = 2; i < (n-1); i++)
    {
        
        if(n%i==0)
        {
            dem ++ ;
        }
    }
    if(dem == 0)
    {
        cout << "Day la so nguyen to !!!";
    }
    else
    {
        cout << "Day khong phai so nguyen to";
    }
}

int main()
{
    int n;
    cout << "Nhap n = " ;
    cin >> n ;
    songuyento(n);
    
    
}